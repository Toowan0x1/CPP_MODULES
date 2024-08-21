/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:24:48 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/07 19:24:49 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Copy constructors
AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) 
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw AForm::GradeTooHighException();
    } else if (gradeToSign > 150 || gradeToExecute > 150) {
        throw AForm::GradeTooLowException();
    }
}

AForm::AForm(const std::string& name, int gradeToSign)
    : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(0) {
    if (gradeToSign < 1) {
        throw AForm::GradeTooHighException();
    } else if (gradeToSign > 150) {
        throw AForm::GradeTooLowException();
    }
}

AForm::AForm(const AForm& src) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {}

// Assignment Operator
AForm&   AForm::operator=( const AForm& rhs ) {
    if ( this != &rhs )
        _signed = rhs.getSigned();
    return *this;
}

// Destructor
AForm::~AForm(){ }

// Getters
std::string AForm::getName() const {
    return _name;
}

bool    AForm::getSigned() const {
    return _signed;
}

int   AForm::getGradeToSign() const {
    return _gradeToSign;
}

int   AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

// Sign the form
void    AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign) {
        throw AForm::GradeTooLowException();
    }
    _signed = true;
}

// Check if form can be executed
void    AForm::checkExecution(const Bureaucrat &executor) const {
    if (!_signed)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > _gradeToExecute)
        throw AForm::GradeTooLowException();
}

// Exception Messages
const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed!";
}

// Overload of the insertion operator
std::ostream &operator<<(std::ostream &o, const AForm &rhs) {
    o << "+-------------------------------------+\n"
      << "| Form Information                    |\n"
      << "+-------------------------------------+\n"
      << "| Form Name        :  " << rhs.getName() << "\n"
      << "| Grade to Sign    :  " << rhs.getGradeToSign() << "\n"
      << "| Grade to Execute :  " << rhs.getGradeToExecute() << "\n"
      << "| Signed           :  " << (rhs.getSigned() ? "Yes" : "No") << "\n"
      << "+-------------------------------------+";
    return o;
}
