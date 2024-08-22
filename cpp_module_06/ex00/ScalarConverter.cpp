/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:06:03 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/22 19:06:04 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) {
    return *this;
}
ScalarConverter::~ScalarConverter() {}


/*
void ScalarConverter::convert(const std::string& literal) {
    if (literal.length() == 1 && !isdigit(literal[0])) {
        fromChar(literal);
    } else if (literal.find('f') != std::string::npos) {
        fromFloat(literal);
    } else if (literal.find('.') != std::string::npos) {
        fromDouble(literal);
    } else {
        fromInt(literal);
    }
}
*/


void    ScalarConverter::convert(const std::string& literal) {
    //
}

void    ScalarConverter::fromChar(const std::string& literal) {
    //
}

void    ScalarConverter::fromInt(const std::string& literal) {
    //
}

void    ScalarConverter::fromFloat(const std::string& literal) {
    //
}

void    ScalarConverter::fromDouble(const std::string& literal) {
    //
}

/*
void ScalarConverter::fromChar(const std::string& literal) {
    char c = literal[0];

    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::fromInt(const std::string& literal) {
    long intValue = std::strtol(literal.c_str(), nullptr, 10);

    if (errno == ERANGE || intValue < std::numeric_limits<int>::min() || intValue > std::numeric_limits<int>::max()) {
        std::cout << "int: impossible" << std::endl;
    } else {
        int i = static_cast<int>(intValue);
        std::cout << "int: " << i << std::endl;

        if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max() || !isprint(i)) {
            std::cout << "char: Non displayable" << std::endl;
        } else {
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        }
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
}

void ScalarConverter::fromFloat(const std::string& literal) {
    float fValue = std::strtof(literal.c_str(), nullptr);

    if (errno == ERANGE || !std::isfinite(fValue)) {
        std::cout << "float: impossible" << std::endl;
    } else {
        std::cout << "float: " << fValue << "f" << std::endl;

        if (fValue < std::numeric_limits<char>::min() || fValue > std::numeric_limits<char>::max() || !isprint(static_cast<int>(fValue))) {
            std::cout << "char: Non displayable" << std::endl;
        } else {
            std::cout << "char: '" << static_cast<char>(fValue) << "'" << std::endl;
        }
        if (fValue < std::numeric_limits<int>::min() || fValue > std::numeric_limits<int>::max()) {
            std::cout << "int: impossible" << std::endl;
        } else {
            std::cout << "int: " << static_cast<int>(fValue) << std::endl;
        }
        std::cout << "double: " << static_cast<double>(fValue) << std::endl;
    }
}

void ScalarConverter::fromDouble(const std::string& literal) {
    double dValue = std::strtod(literal.c_str(), nullptr);

    if (errno == ERANGE || !std::isfinite(dValue)) {
        std::cout << "double: impossible" << std::endl;
    } else {
        std::cout << "double: " << dValue << std::endl;

        if (dValue < std::numeric_limits<char>::min() || dValue > std::numeric_limits<char>::max() || !isprint(static_cast<int>(dValue))) {
            std::cout << "char: Non displayable" << std::endl;
        } else {
            std::cout << "char: '" << static_cast<char>(dValue) << "'" << std::endl;
        }
        if (dValue < std::numeric_limits<int>::min() || dValue > std::numeric_limits<int>::max()) {
            std::cout << "int: impossible" << std::endl;
        } else {
            std::cout << "int: " << static_cast<int>(dValue) << std::endl;
        }
        std::cout << "float: " << static_cast<float>(dValue) << "f" << std::endl;
    }
}

#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./convert <literal>" << std::endl;
        return 1;
    }

    ScalarConverter::convert(argv[1]);
    return 0;
}


Key Points:
- The ScalarConverter class is static to prevent instantiation and has static methods for conversion.
- The conversion handles char, int, float, and double types along with the specific pseudo literals.
- Error handling is done for out-of-range values, and appropriate messages are displayed for non-displayable characters or impossible conversions.

*/