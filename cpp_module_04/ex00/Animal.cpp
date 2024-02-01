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

Animal::Animal() : AnimalType("Animal") {
    std::cout << this->AnimalType << " default constructor called." << std::endl;
}

Animal::Animal(std::string AnimalType) : AnimalType(AnimalType)
{
    std::cout << "Animal " << this->AnimalType << " defaut constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &rhs) {
        this->AnimalType = rhs.AnimalType;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string    Animal::getType() const
{
    return this->AnimalType;
}