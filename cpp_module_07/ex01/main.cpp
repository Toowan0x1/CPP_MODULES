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

template<typename T>
void increment(T& element) {
    ++element;
}

int main() {
    // Test with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    unsigned int intLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "" << std::endl; 
    //

    return 0;
}



/*
    std::cout << "Original integer array: ";
    iter(intArray, intLength, print);
    std::cout << std::endl;

    iter(intArray, intLength, increment);
    std::cout << "Incremented integer array: ";
    iter(intArray, intLength, print);
    std::cout << std::endl;

    // Test with an array of doubles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    unsigned int doubleLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Original double array: ";
    iter(doubleArray, doubleLength, print);
    std::cout << std::endl;

    iter(doubleArray, doubleLength, increment);
    std::cout << "Incremented double array: ";
    iter(doubleArray, doubleLength, print);
    std::cout << std::endl;
}*/