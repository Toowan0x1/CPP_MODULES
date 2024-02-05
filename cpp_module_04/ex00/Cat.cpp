/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:40:56 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/05 02:04:28 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << this->_type << " default constructor called." << std::endl;
}

Cat::~Cat() {
    std::cout << this->_type << " destructor called." << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow! Meow!" << std::endl;
}
