/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:06:09 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/22 19:06:10 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <fstream>
#include <limits>
#include <string>

class ScalarConverter {
    public:
        static void convert(const std::string& literal);
    private:
        ScalarConverter(); // Prevent instantiation
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& rhs);
        ~ScalarConverter();

        static void fromChar(const std::string& literal);
        static void fromInt(const std::string& literal);
        static void fromFloat(const std::string& literal);
        static void fromDouble(const std::string& literal);
};

#endif // SCALARCONVERTER_HPP
