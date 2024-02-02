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

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"
#include <string> //
#include <new> // 

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    // Make Limitation
    std::cout << "=======   =======   =======   =======" << std::endl;
    
    // Create and fill an array of Animal objects
    const int arraySize = 6;
    Animal* animalArray[arraySize];
    
    for (int k = 0; k < arraySize / 2; ++k) {
        try {
            animalArray[k] = new Dog();
        }
        catch (const std::bad_alloc& e) {
            std::cerr << "Error: Unable to allocate memory for Dog - " << e.what() << std::endl;
        }
    }

    for (int k = arraySize / 2; k < arraySize; ++k) {
        try {
            animalArray[k] = new Cat();
        } catch (const std::bad_alloc& e) {
            std::cerr << "Error: Unable to allocate memory for Cat - " << e.what() << std::endl;
        }
    }

    // // Generate some ideas for Dog's Brain
    // dynamic_cast<Dog*>(animalArray[0])->generateIdeas();
    
    // Deleting every Animal in the array:
    for (int k = 0; k < arraySize; ++k) {
        delete animalArray[k];
    }
    
    return 0;
}
