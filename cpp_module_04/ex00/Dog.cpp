/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:21:42 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 23:21:49 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << this->animalType << " default constructor called." << std::endl;
}

Dog::~Dog() {
    std::cout << this->animalType << " destructor called." << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof! Woof!" << std::endl;
}
