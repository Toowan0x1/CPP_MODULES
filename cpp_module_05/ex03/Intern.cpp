/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:22:22 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/21 16:22:27 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

// Constructors and Destructor
Intern::Intern() {}

Intern::Intern(const Intern& other) {
    (void)other;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Intern::~Intern() {}

// Form Creation Fuction
AForm* Intern::createShrubbery(const std::string& target) const {
    return new ShrubberyCreationForm(target);
}

AForm* Intern::createRobotomy(const std::string& target) const {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createPardon(const std::string& target) const {
    return new PresidentialPardonForm(target);
}

/* EXAMPLE USAGE:

Intern intern;
AForm* form = intern.createShrubbery("home");

// Use the form object here ...
form->beSigned(bureaucratA);
form->execute(bureaucratA);

// Delete the form to avoid memory leaks:
delete form;

*/

// makeForm Function
AForm* Intern::makeForm(const std::string& formName, const std::string target) const {
    formType forms[] = {
        {"shrubbery creation", &Intern::createShrubbery},
        {"robotomy creation", &Intern::createRobotomy},
        {"presidential creation", &Intern::createPardon}
    };

    for (int i = 0; i < 3; ++i) {
        if (formName == forms[i].name) {
            std::cout << "Intern creates" << formName << std::endl;
            return (this->);
        }
    }

    std::cout << "Error: Form " << formName << "doesn't exist." << std::endl;
    return 0; // Return 0 instead of nullptr for C++98.
}