#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string const & databaseFile)
{
    loadDatabse(databaseFile);
}

BitcoinExchange::~BitcoinExchange() {}


void    BitcoinExchange::loadDatabse(std::string const & databaseFile)
{
    std::ifstream file(databaseFile.c_str());
    if (!file.is_open()) {
        throw std::runtime_error("Could not open database file '" + databaseFile + "'");
    }
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string date;
        float rate;
        if (std::getline(ss, date, ',') && ss >> rate) {
            _exchangeRates[date] = rate;
        }
    }
    file.close();
}

double  BitcoinExchange::getExchangeRate(std::string const & date) const
{
    std::map<std::string, double>::const_iterator it = _exchangeRates.lower_bound(date);
    if (it == _exchangeRates.end() || it->first != date) {
        if (it == _exchangeRates.begin()) {
            return it->second;
        }
        --it; return (it->second);
    }
    return (it->second);
}

bool    BitcoinExchange::isValidDate(std::string const & date) const
{
    // std::cout << "date size : " << date.size() << "\n";
    if (date.size() != 11 || date[4] != '-' || date[7] != '-') {
        std::cerr << "Error: bad input => " << date << std::endl;
        return false;
    }
    int year, month, day;
    char sep1, sep2;
    std::istringstream ss(date);
    ss >> year >> sep1 >> month >> sep2 >> day;
    if (ss.fail() || sep1 != '-' || sep2 != '-') {
        std::cerr << "Error: bad input => " << date << std::endl;
        return false;
    }
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        std::cerr << "Error: bad input => " << date << std::endl;
        return false;
    }
    return true;
}

bool    BitcoinExchange::isValidValue(std::string const & value) const
{
    // double val = std::stod(value);
    std::istringstream ss(value);
    double val;
    ss >> val;
    if (ss.fail() || !ss.eof()) {
        return false;
    }
    else if (val <= 0.0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    else if (val >= 1000.0) {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

void    BitcoinExchange::processInputFile(std::string const & inputFile) const
{
    std::ifstream file(inputFile.c_str());
    if (!file.is_open()) {
        throw std::runtime_error("Could not open '" + inputFile + "'");
        return;
    }
    std::string line;
    int lineIndex = 0;
    while (std::getline(file, line)) {
        if ((line != "date | value") && (lineIndex == 0)) {
            std::cerr << "Error: invalid header format." << std::endl;
            return;
        }
        std::istringstream ss(line);
        std::string date;
        std::string value;
        if (std::getline(ss, date, '|') && std::getline(ss, value) && (lineIndex != 0)) {
            if (isValidDate(date) && isValidValue(value)) {
                double rate = getExchangeRate(date);
                // replace std::stod with stringstream to convert value to double cause we can't use std::stod in std-98. 
                std::stringstream valueStream(value);
                double amount; // = std::stod(value);
                valueStream >> amount;
                double result = rate * amount;
                std::cout << date << " => " << amount << " = " << result << std::endl;
            }
        }
        else {
            if (lineIndex > 0) {
                std::cerr << "Error: bad input => " << line << std::endl;
            }
        }
        lineIndex++;
    }
}
