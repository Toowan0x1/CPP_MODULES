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
#include "Form.hpp"

int main(void) {
    try {
        Bureaucrat bob("Bob", 2);
        Form formA("FormA", 1, 50);

        std::cout << formA << std::endl;

        bob.signForm(formA);
        std::cout << formA << std::endl;
        
        bob.incrementGrade(); // Bob's grade will become 1
        bob.signForm(formA); // This will now successfully sign the form

        std::cout << formA << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

/*
int main(void)
{
    try {
        //Bureaucrat bureaucrat("toowan", 151);
        //Bureaucrat bureaucrat("toowan", 0);
        Bureaucrat bureaucrat("toowan", 12);
        Form form("formA", 50);

        bureaucrat.signForm(form);
        
        std::cout << form << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
*/