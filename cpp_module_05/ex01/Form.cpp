/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:24:48 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/07 19:24:49 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Copy constructors
Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) 
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw Form::GradeTooHighException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw Form::GradeTooLowException();
    }
}

Form::Form(const std::string& name, int gradeToSign)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(0) {
    if (gradeToSign < 1) {
        throw Form::GradeTooHighException();
    } else if (gradeToSign > 150) {
        throw Form::GradeTooLowException();
    }
}

Form::Form(const Form& src) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {}

// Assignment Operator
Form&   Form::operator=( const Form& rhs ) {
    if ( this != &rhs )
        _signed = rhs.getSigned();
    return *this;
}

// Destructor
Form::~Form(){ }

// Getters
std::string Form::getName() const {
    return _name;
}

bool    Form::getSigned() const {
    return _signed;
}

int   Form::getGradeToSign() const {
    return _gradeToSign;
}

int   Form::getGradeToExecute() const {
    return _gradeToExecute;
}

// Member Function: beSigned
void    Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign) {
        throw Form::GradeTooLowException();
    }
    _signed = true;
}

// Exception Messages
const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

// Overload of the insertion operator
std::ostream &operator<<(std::ostream &o, const Form &rhs) {
    o << "+-------------------------------------+\n"
      << "| Form Information                    |\n"
      << "+-------------------------------------+\n"
      << "| Name             :  " << rhs.getName() << "\n"
      << "| Grade to Sign    :  " << rhs.getGradeToSign() << "\n"
      << "| Grade to Execute :  " << rhs.getGradeToExecute() << "\n"
      << "| Signed           :  " << (rhs.getSigned() ? "Yes" : "No") << "\n"
      << "+-------------------------------------+";
    return o;
}
