/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:13:43 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 22:13:45 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string AnimalType;
    public:
        Animal();
        Animal(std::string AnimalType);
        virtual ~Animal();
        //virtual std::string getType() const;
        std::string getType() const;
        virtual void makeSound() const;
};

#endif

// we have 2 drived class : dog and cat.