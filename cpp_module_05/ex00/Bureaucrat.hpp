/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:16:23 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/07 17:20:11 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
    private:
        const std::string   _name;
        int                 _grade;

        Bureaucrat();
    public:
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat& src);
        ~Bureaucrat();

        Bureaucrat& operator=(const Bureaucrat& rhs);

        std::string getName() const;
        int         getGrade() const;

        void    incrementGrade();
        void    decrementGrade();

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

};

std::ostream&   operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
