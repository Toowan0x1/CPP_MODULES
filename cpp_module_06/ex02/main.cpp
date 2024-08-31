/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:43:53 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/29 22:42:35 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Identify.cpp"

int main() {
    srand(static_cast<unsigned int>(time(0)));

    Base* base = generate();
    identify(base);
    identify(*base);

    delete base;

    return 0;
}
Base.hpp: Defines the Base class with a public virtual destructor.
A.hpp, B.hpp, C.hpp: Define empty classes A, B, and C that inherit from Base.
Identify.cpp: Implements the generate() function to randomly instantiate A, B, or C. It also implements identify(Base* p) and identify(Base& p) to identify the actual type of the object.
Main.cpp: Tests the implementation by generating a random object and identifying its type.
*/