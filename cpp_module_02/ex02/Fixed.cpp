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
}

Fixed::Fixed(const int value) {
    this->_fixedPointValue = value << Fixed::_fractionalBits;
}

Fixed::Fixed(const float value) {
    this->_fixedPointValue = roundf(value *(1 << Fixed::_fractionalBits));
}

Fixed::Fixed(const Fixed &other) {
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->_fixedPointValue = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
}

int     Fixed::getRawBits() const {
    return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

int     Fixed::toInt() const {
    return this->_fixedPointValue >> Fixed::_fractionalBits;
}


float   Fixed::toFloat() const {
    return (float)this->_fixedPointValue / (1 << Fixed::_fractionalBits);
}

bool    Fixed::operator>(const Fixed& other) const {
    return this->_fixedPointValue > other._fixedPointValue;
}

bool    Fixed::operator<(const Fixed& other) const {
    return other > *this;
}

bool    Fixed::operator>=(const Fixed& other) const {
    return !(other > *this);
}

bool    Fixed::operator<=(const Fixed& other) const {
    return !(*this > other);
}

bool    Fixed::operator==(const Fixed& other) const {
    return this->_fixedPointValue == other._fixedPointValue;
}

bool    Fixed::operator!=(const Fixed& other) const {
    return !(*this == other);
}

Fixed   Fixed::operator+(const Fixed& other) const {
	Fixed res;

	res._fixedPointValue = (this->_fixedPointValue + other._fixedPointValue);
	return res;
}

Fixed   Fixed::operator-(const Fixed& other) const {
	Fixed res;

	res._fixedPointValue = (this->_fixedPointValue - other._fixedPointValue);
	return res;
}

Fixed   Fixed::operator*(const Fixed& other) const {
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed   Fixed::operator/(const Fixed& other) const {
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}

Fixed&  Fixed::operator++() {
    ++_fixedPointValue;
    return (*this);
}

Fixed&  Fixed::operator--() {
    --_fixedPointValue;
    return (*this);
}

Fixed   Fixed::operator++(int) {
    Fixed prev(*this);
    ++_fixedPointValue;
    return prev;
}

Fixed   Fixed::operator--(int) {
    Fixed prev(*this);
    --_fixedPointValue;
    return prev;
}

Fixed&  Fixed::min(Fixed& lhs, Fixed& rhs) {
    if (lhs < rhs)
        return lhs;
    else
        return rhs;
}

Fixed&  Fixed::max(Fixed& lhs, Fixed& rhs) {
    if (lhs > rhs)
        return lhs;
    else
        return rhs;
}

const   Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
    if (lhs < rhs)
        return lhs;
    else
        return rhs;
}

const   Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
    if (lhs > rhs)
        return lhs;
    else
        return rhs;
}

/* ostream operator */
std::ostream &operator<<(std::ostream &ostream, const Fixed& obj) {
    ostream << obj.toFloat();
	return ostream;
}

/* member member functions to implement:
 -comparation operator
- arethemtic operator
- increment & decrement
- min & max
 - ...
*/
