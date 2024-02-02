/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:30:08 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 23:30:09 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << this->_type << " default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal " << this->_type << " constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor called." << std::endl; ////
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
    std::cout << "WrongAnimal assignment operator called." << std::endl;
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Wrong Sound called." << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return this->_type;
}
