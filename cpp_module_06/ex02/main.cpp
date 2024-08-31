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

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Identify.hpp"

int main() {
    srand(static_cast<unsigned int>(time(0)));

    Base* base = generate();
    // Identify(base);
    Identify(*base); // Correct: Pass a reference to Identify()

    delete base; // Clean up

    return 0;
}
