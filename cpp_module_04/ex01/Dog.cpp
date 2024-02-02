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
    std::cout << this->_type << " default constructor called." << std::endl;
    try {
        this->_dogBrain = new Brain();
    }
    catch (const std::bad_alloc &e) {
        std::cout << "Error: Unable to allocate memory for Dog's Brain - " << e.what() << std::endl;
        throw;
    }
}

Dog::~Dog() {
    std::cout << this->_type << " destructor called." << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof! Woof!" << std::endl;
}
