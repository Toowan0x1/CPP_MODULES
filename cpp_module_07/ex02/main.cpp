/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:41:21 by oel-houm          #+#    #+#             */
/*   Updated: 2024/10/20 21:41:22 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
    // Test default constructor
    Array<int> defaultArray;
    std::cout << "Default array size: " << defaultArray.size() << std::endl;

    // Test constructor with size
    Array<int> intArray(5);
    std::cout << "Array of 5 integers created. Size: " << intArray.size() << std::endl;

    // Test default initialization
    std::cout << "Array default values: ";
    for (unsigned int i = 0; i < intArray.size(); i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Test copy constructor
    Array<int> copyArray(intArray);
    std::cout << "Copy array created. Size: " << copyArray.size() << std::endl;

    // Modify original array and check if copy is unaffected
    intArray[0] = 42;
    std::cout << "Original array after modification: ";
    for (unsigned int i = 0; i < intArray.size(); i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Copy array after original modification: ";
    for (unsigned int i = 0; i < copyArray.size(); i++) {
        std::cout << copyArray[i] << " ";
    }
    std::cout << std::endl;

    // Test assignment operator
    Array<int> assignArray = intArray;
    std::cout << "Assigned array created. Size: " << assignArray.size() << std::endl;

    std::cout << "Assigned array values: ";
    for (unsigned int i = 0; i < assignArray.size(); i++) {
        std::cout << assignArray[i] << " ";
    }
    std::cout << std::endl;

    // Test out-of-bounds access
    try {
        std::cout << "Trying to access out-of-bounds index 10..." << std::endl;
        std::cout << intArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
