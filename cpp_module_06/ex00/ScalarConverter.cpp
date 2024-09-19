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

bool ScalarConverter::checkPseudoLiterals(const std::string& literal) {
    // 
    for (int i = 0; i < 3; ++i) {
        if (literal == "+inf" || literal == "-inf" || literal == "nan") {
            fromDouble(literal);
            return true;
        }
    }
    
    // 
    for (int i = 0; i < 3; ++i) {
        if (literal == "+inff" || literal == "-inff" || literal == "nanf") {
            fromFloat(literal);
            return true;
        }
    }
    return false;
}
/* ******************** ScalarConverter Functions ******************** */
void    ScalarConverter::convert(const std::string& literal) {
    if (checkPseudoLiterals(literal)) {
        return;
    }

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
    if (literal == "+inff" || literal == "-inff" || literal == "nanf") {
        std::cout << "float: " << literal << std::endl;
        std::cout << "double: " << literal.substr(0, literal.length() - 1) << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        return;
    }

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
/*
void ScalarConverter::fromFloat(const std::string& literal) {
    float fValue = strtof(literal.c_str(), NULL);

    // Check for pseudo-literals
    if (literal == "+inff" || literal == "-inff" || literal == "nanf") {
        std::cout << "float: " << literal << std::endl;
        std::cout << "double: " << static_cast<double>(fValue) << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        return;
    }

    // Check for range and validity
    if (errno == ERANGE || !std::isfinite(fValue)) {
        std::cout << "float: impossible" << std::endl;
        return;
    }
    
    std::cout << "float: " << fValue << "f" << std::endl;

    if (fValue < std::numeric_limits<char>::min() || fValue > std::numeric_limits<char>::max() ||
        !isprint(static_cast<int>(fValue))) {
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
}*/

/*
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
*/
void ScalarConverter::fromDouble(const std::string& literal) {
    double dValue = std::strtod(literal.c_str(), NULL);

    // Check for pseudo-literals
    if (literal == "+inf" || literal == "-inf" || literal == "nan") {
        std::cout << "double: " << literal << std::endl;
        std::cout << "float: " << static_cast<float>(dValue) << "f" << std::endl;
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        return;
    }

    // Check for range and validity
    if (errno == ERANGE || !std::isfinite(dValue)) {
        std::cout << "double: impossible" << std::endl;
        return;
    }

    std::cout << "double: " << dValue << std::endl;

    if (dValue < std::numeric_limits<char>::min() || dValue > std::numeric_limits<char>::max() ||
        !isprint(static_cast<int>(dValue))) {
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
