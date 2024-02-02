/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:40:56 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 22:40:57 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
    std::cout << this->_type << " default constructor called." << std::endl;
    try {
        this->_catBrain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Error: Unable to allocate memory for Cat's Brain - " << e.what() << std::endl;
        throw;
    }
}

Cat::~Cat() {
    std::cout << this->_type << " deconstructor called." << std::endl;
}


void    Cat::makeSound( void ) const
{
    std::cout << "Meow! Meow!" << std::endl;
}
