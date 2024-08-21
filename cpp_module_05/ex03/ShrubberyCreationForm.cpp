/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:17:44 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/19 23:17:45 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Execute form action
void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    checkExecution(executor);
    
    //std::ofstream ofs(_target + "_shrubbery");
    std::ofstream ofs((_target + "_shrubbery").c_str());  // Convert std::string to const char*
    if (ofs.fail())
        throw std::ofstream::failure("Failed to open file");
    
    ofs << "     ccee88oo\n"
        << "  C8O8O8Q8PoOb o8oo\n"
        << " dOB69QO8PdUOpugoO9bD\n"
        << "CgggbU8OU qOp qOdoUOdcb\n"
        << "    6OuU  /p u gcoUodpP\n"
        << "      \\\\\\//  /douUP\n"
        << "        \\\\////\n"
        << "         |||/\\\n"
        << "         |||\\/\n"
        << "         |||||\n"
        << "   .....//||||\\....";
    ofs.close();
}
