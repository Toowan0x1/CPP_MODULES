/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:16:40 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/07 17:16:41 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>

/*
int main(void) {
    try {
        Bureaucrat toowan("Toowan", 150);
        std::cout << toowan << std::endl;

        toowan.incrementGrade();
        std::cout << toowan << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
*/

int main() {
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;

        bob.incrementGrade();
        std::cout << bob << std::endl;

        bob.incrementGrade(); // This will throw an exception
        std::cout << bob << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Bureaucrat alice("Alice", 149);
        std::cout << alice << std::endl;

        alice.decrementGrade();
        std::cout << alice << std::endl;

        alice.decrementGrade(); // This will throw an exception
        std::cout << alice << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
