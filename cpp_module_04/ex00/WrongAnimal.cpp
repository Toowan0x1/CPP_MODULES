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


#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal {
    protected:
        std::string animalType;
    public:
        WrongAnimal();
        WrongAnimal(std::string animalType);
        WrongAnimal(const WrongAnimal& src);
        WrongAnimal& operator=(const WrongAnimal& rhs);
        ~WrongAnimal();
        std::string getType() const;
        void    makeSound() const;
};

#endif


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong Animal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "Some wrong sound" << std::endl;
}
