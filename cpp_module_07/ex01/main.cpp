/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:42:04 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/31 17:42:06 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// Function to be used with iter
template<typename T>
void print(T& element) {
    std::cout << element << " ";
}

// template<typename T>
// void increment(T& element) {
//     ++element;
// }

template<typename T>
void    set42func(T& element) {
    element = 42;
}

int main() {
    // Test with an array of integers
    int intArray[] = {0, 1, 2, 3, 4};
    unsigned int intLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Print intArray members:" << std::endl; 
    iter(intArray, intLength, print);
    std::cout << std::endl;
    std::cout << std::endl;

    // std::cout << "Incrementing intArray members" << std::endl; 
    // iter(intArray, intLength, increment);
    // std::cout << std::endl;

    std::cout << "Set element's value to 42" << std::endl;
    iter(intArray, intLength, set42func);
    std::cout << std::endl;
    
    std::cout << "Print intArray members:" << std::endl; 
    iter(intArray, intLength, print);
    std::cout << std::endl;

    return 0;
}
