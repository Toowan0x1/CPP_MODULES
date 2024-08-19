/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:24:43 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/07 19:24:44 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;

        Form();
    
    public:
        // Copy constructors and Destructor
        Form(const std::string& name, int gradeToSign);
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        Form(const Form& src);
        ~Form();

        Form& operator=(const Form& rhs);

        // Getters
        std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;

        // Member Functions
        void    beSigned(const Bureaucrat& bureaucrat);

        // Exceptions
        /*
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
                virtual ~GradeTooHighException() throw() {}
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
                virtual ~GradeTooLowException() throw() {}
        };*/
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
};

// Overload of the insertion operator
std::ostream&   operator<<( std::ostream& o, const Form& rhs );

#endif
