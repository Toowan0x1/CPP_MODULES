/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:30:14 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 23:30:16 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : animalType("WrongAnimal") {
    std::cout << this->animalType << " default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type( type )
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

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignment operator called." << std::endl;
    if (this != &rhs) {
        this->_type = rhs.animalType;
    }
    return *this;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "Wrong Sound called." << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return this->animalType;
}
