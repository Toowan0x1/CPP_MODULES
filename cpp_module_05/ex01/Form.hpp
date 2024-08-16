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

#include <iostream>

class Form {
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;

        Form();
    public:
        Form(const std::string& name, int gradeToSign);
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        Form(const Form& src);
        ~Form();

        Form& operator=(const Form& rhs);

        std::string getName() const;
        bool    getSigned() const;
        int     getGradeToSign() const;
        int     getGradeToExecute() const;

        void    beSigned(const Bureaucrat& bureaucrat);

        class GradeToHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeToLowException : public std::exception() {
            public
                const char* what() const throw();
        };
};

std::ostream&   operator<<( std::ostream& o, const Form& rhs );

#endif
