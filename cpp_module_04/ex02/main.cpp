/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:13:18 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 22:13:21 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"
#include <string> //
#include <new> // 

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    std::cout << j->getType() << " says: ";
    j->makeSound();

    std::cout << i->getType() << " says: ";
    i->makeSound();

    delete j; //should not create a leak
    delete i;

    return 0;
}
