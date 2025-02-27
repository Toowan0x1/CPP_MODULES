#ifndef BITCOIN_EXCHANGE
#define BITCOIN_EXCHANGE

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <stdexcept>

class BitcoinExchange {
    private:
        std::map<std::string, double> _exchangeRates;
        void    loadDatabse(std::string const & databaseFile);
        double  getExchangeRate(std::string const & date) const;
        bool    isValidValue(std::string const & value) const;
        bool    isValidDate(std::string const & date) const;
    public:
        BitcoinExchange(std::string const & databaseFile);
        ~BitcoinExchange();
        void    processInputFile(std::string const & inputFile) const;
};

#endif
