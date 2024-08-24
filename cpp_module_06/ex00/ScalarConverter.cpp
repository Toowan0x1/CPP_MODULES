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

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cerrno>


/* ******************** Constructors & Destructor ******************** */
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) {
    return *this;
}
ScalarConverter::~ScalarConverter() {}


/* ******************** Convert Functions ******************** */
void    ScalarConverter::convert(const std::string& literal) {
    if (literal.length() == 1 && !isdigit(literal[0])) {
        fromChar(literal);
    }
    else if (literal.find('f') != std::string::npos) {
        fromFloat(literal);
    }
    else if (literal.find('.') != std::string::npos) {
        fromDouble(literal);
    }
    else {
        fromInt(literal);
    }
}

void    ScalarConverter::fromChar(const std::string& literal) {
    char c = literal[0];

    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void    ScalarConverter::fromInt(const std::string& literal) {
    long intValue = strtol(literal.c_str(), NULL, 10);

    // If errno is set to ERANGE (indicating the value is out of range) or intValue is outside the int range, it prints "int: impossible".
    if (errno == ERANGE || intValue < std::numeric_limits<int>::min() ||
        intValue > std::numeric_limits<int>::max()) {
        std::cout << "int: impossible" <<std::endl;
    }
    else {
        int i = static_cast<int>(intValue);
        std::cout << "int: " << i << std::endl;

        if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max() ||
            !isprint(i)) {
            std::cout << "char: Non displayable" << std::endl;
        }
        else {
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        }
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
}

void    ScalarConverter::fromFloat(const std::string& literal) {
    float fValue = strtof(literal.c_str(), NULL);

    if (errno == ERANGE || !std::isfinite(fValue)) {
        std::cout << "float: impossible" << std::endl;
    }
    else {
        std::cout << "float: " << fValue << "f" << std::endl;

        if (fValue < std::numeric_limits<char>::min() || fValue > std::numeric_limits<char>::max() ||
            !isprint(static_cast<int>(fValue))) {
            std::cout << "char: Non displayable" << std::endl;
        }
        else {
            std::cout << "char: '" << static_cast<char>(fValue) << "'" << std::endl;
        }
        if (fValue < std::numeric_limits<int>::min() || fValue > std::numeric_limits<int>::max()) {
            std::cout << "int: impossible" << std::endl;
        }
        else {
            std::cout << "int: " << static_cast<int>(fValue) << std::endl;
        }
        std::cout << "double: " << static_cast<double>(fValue) << std::endl;
    }
}

void    ScalarConverter::fromDouble(const std::string& literal) {
    double dValue = std::strtod(literal.c_str(), NULL);

    if (errno == ERANGE || !std::isfinite(dValue)) {
        std::cout << "double: impossible" << std::endl;
    }
    else {
        std::cout << "double: " << dValue << std::endl;

        if (dValue < std::numeric_limits<char>::min() || dValue > std::numeric_limits<char>::max() ||
            !isprint(static_cast<int>(dValue))) {
            std::cout << "char: Non displayable" << std::endl;
        }
        else {
            std::cout << "char: '" << static_cast<char>(dValue) << "'" << std::endl;
        }
        if (dValue < std::numeric_limits<int>::min() || dValue > std::numeric_limits<int>::max()) {
            std::cout << "int: impossible" << std::endl;
        }
        else {
            std::cout << "int: " << static_cast<int>(dValue) << std::endl;
        }
        std::cout << "float: " << static_cast<float>(dValue) << std::endl;
    }
}

// fatima
// meryem
// hamza
/*
Key Points:
- The ScalarConverter class is static to prevent instantiation and has static methods for conversion.
- The conversion handles char, int, float, and double types along with the specific pseudo literals.
- Error handling is done for out-of-range values, and appropriate messages are displayed for non-displayable characters or impossible conversions.
// int
// char
// float
// double
// strtol, strtof(){}
// !isprintable
// errno = erange
// !std::isfinite(fValue))
!std::isfinite()
./convert 'a'
char: 'a'
int: 97
float: 97.0f
double: 97.0
*/

/*
sh-5.2$ ./ScalarConverter 96
int: 96
char: '`'
float: 96f
double: 96
sh-5.2$ ./ScalarConverter 48
int: 48
char: '0'
float: 48f
double: 48
sh-5.2$ 
sh-5.2$ 
sh-5.2$ 
sh-5.2$ ./ScalarConverter 48
int: 48
char: '0'
float: 48f
double: 48
sh-5.2$ 
sh-5.2$ 
sh-5.2$ ./ScalarConverter 48.000
double: 48
char: '0'
int: 48
float: 48
sh-5.2$ ./ScalarConverter 48.000f
float: 48f
char: '0'
int: 48
double: 48
sh-5.2$ ./ScalarConverter 48.002f
float: 48.002f
char: '0'
int: 48
double: 48.002
sh-5.2$ ./ScalarConverter 48.002^C*/