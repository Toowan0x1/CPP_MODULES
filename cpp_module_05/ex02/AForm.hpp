/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:24:43 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/07 19:24:44 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;

        AForm();
    
    public:
        // Copy constructors and Destructor
        AForm(const std::string& name, int gradeToSign);
        AForm(const std::string& name, int gradeToSign, int gradeToExecute);
        AForm(const AForm& src);
        virtual ~AForm();

        AForm& operator=(const AForm& rhs);

        // Getters
        std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;

        // Member Functions
        void            beSigned(const Bureaucrat& bureaucrat);
        virtual void    execute(const Bureaucrat& executor) const = 0; // Pure virtual function 

        // Exceptions
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

        class FormNotSignedException : public std::exception {
            public:
                const char* what() const throw();
        };
    
    protected:
        void    checkExecution(const Bureaucrat& executor) const;
};

// Overload of the insertion operator
std::ostream&   operator<<( std::ostream& o, const AForm& rhs);

#endif
