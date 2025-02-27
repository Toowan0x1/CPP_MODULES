#include "BitcoinExchange.hpp"
#include <iostream>
#include <exception>

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "Usage: ./btc <input_file>" << std::endl;
        return 1;
    }

    try {
        BitcoinExchange btc("data.csv");
        btc.processInputFile(av[1]);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
