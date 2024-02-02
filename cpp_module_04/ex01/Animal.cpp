/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:13:51 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 22:13:52 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << this->_type << " default constructor called." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal " << this->_type << " defaut constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal& src)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = src;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal assignment operator called." << std::endl;
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound called." << std::endl;
}

std::string    Animal::getType() const
{
    return this->_type;
}