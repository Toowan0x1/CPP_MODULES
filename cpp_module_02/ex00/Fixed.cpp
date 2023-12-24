/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:43:11 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/24 06:36:03 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
    std::cout << "Fixed: default constructor called."<< std::endl;
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
    std::cout << "Fixed: getRawBits member function called." << std::endl;
    return this->_fixedPointValue;
}

void    Fixed::setRawBits(int const raw) {
	std::cout << "Fixed: setRawBits member function called." << std::endl;
    this->_fixedPointValue = raw;
}
