/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:52:44 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/18 17:52:45 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat bob("Bob", 1);
        Bureaucrat john("John", 150);
        Bureaucrat alice("Alice", 50);

        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("target");
        PresidentialPardonForm pardonForm("Marvin");

        std::cout << shrubberyForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << pardonForm << std::endl;

        // John tries to sign the ShrubberyCreationForm (too low grade)
        john.signForm(shrubberyForm);
        // Bob signs the ShrubberyCreationForm
        bob.signForm(shrubberyForm);
        // Alice executes the ShrubberyCreationForm (should succeed)
        alice.executeForm(shrubberyForm);

        std::cout << shrubberyForm << std::endl;

        // Bob signs and executes the RobotomyRequestForm
        bob.signForm(robotomyForm);
        bob.executeForm(robotomyForm);

        // Bob signs and executes the PresidentialPardonForm
        bob.signForm(pardonForm);
        bob.executeForm(pardonForm);

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
