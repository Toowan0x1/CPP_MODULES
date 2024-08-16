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

int main(void) {
    try {
        Bureaucrat bureaucrat("bureaucratA", 150);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

