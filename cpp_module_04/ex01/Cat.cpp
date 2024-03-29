/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:40:56 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/05 02:03:29 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << this->_type << " default constructor called." << std::endl;
    try {
        this->_catBrain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Error: Unable to allocate memory for Cat's Brain - " << e.what() << std::endl;
        throw;
    }
    delete this->_catBrain;
}

Cat::~Cat() {
    std::cout << this->_type << " destructor called." << std::endl;
}


void    Cat::makeSound( void ) const
{
    std::cout << "Meow! Meow!" << std::endl;
}
