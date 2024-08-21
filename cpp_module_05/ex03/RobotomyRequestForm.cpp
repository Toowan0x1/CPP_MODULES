/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 23:17:29 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/19 23:17:31 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

// Execute form action
void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    checkExecution(executor);
    
    std::cout << "Bzzzzz... *drilling noises*" << std::endl;
    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "The robotomy on " << _target << " failed!" << std::endl;
}
