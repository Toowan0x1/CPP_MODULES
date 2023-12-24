/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:43:11 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/17 15:43:13 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Fixed: default constructor called."<< std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Fixed: int constructor called."<< std::endl;
    // left shift multiplies value by 2^8 or 256, placing the fractional part at the correct position within the fixed-point representation.
    this->_fixedPointValue = value << Fixed::_fractionalBits;
}

Fixed::Fixed(const float value) {
    std::cout << "Fixed: float constructor called."<< std::endl;
    this->_fixedPointValue = roundf(value *(1 << Fixed::_fractionalBits)); //2^8 (256)
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Fixed: copy constructor called." << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Fixed: copy assignment operator called." << std::endl;
    if (this != &other) {
        this->_fixedPointValue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Fixed: destructor called."<< std::endl;
}

int     Fixed::getRawBits() const {
    //std::cout << "Fixed: getRawBits member function called." << std::endl;
    // / 256
    return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw) {
	std::cout << "Fixed: setRawBits member function called." << std::endl;
    this->_fixedPointValue = raw;
}

int     Fixed::toInt() const {
    return this->_fixedPointValue >> Fixed::_fractionalBits;
}


float   Fixed::toFloat() const {
    return (float)this->_fixedPointValue / (1 << Fixed::_fractionalBits);
}

std::ostream &operator<<(std::ostream &ostream, const Fixed& obj) {
    ostream << obj.toFloat();
	return ostream;
}
/*
operator<< : converts the fixed-point representation back to a floating-point value using the toFloat() function before streaming it to the output
    - The toFloat() function divides the _fixedPointValue by 2^8 (256):

The toFloat() : converting from fixed-point to floating-point for output.


*/
