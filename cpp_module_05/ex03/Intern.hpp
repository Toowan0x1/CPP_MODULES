/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:22:32 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/21 16:22:33 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

class Intern {
    private:
        typedef AForm* (Intern::FormCreator)();
        typedef AForm* (Intern::*FormCreator)(const std::string& target) const;
        struct FormType {
            const char *name;
            FormCreator creator;
        }

        AForm* createShrubbery(const std::string& target) const;
        AForm* createRobotomy(const std::string& target) const;
        AForm* createPardon(const std::string& target) const;
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();

        AForm* makeForm(const std::string& formName, const std::string target) const;
}

#endif
