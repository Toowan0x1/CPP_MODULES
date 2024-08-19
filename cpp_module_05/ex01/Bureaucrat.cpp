/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:16:28 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/07 17:16:29 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
    if (grade < highestGrade)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > lowestGrade)
        throw Bureaucrat::GradeTooLowException();
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade) {}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Assignment operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if ( this != &rhs )
        _grade = rhs.getGrade();
    return *this;
}

// Getters
std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

// Increment grade
void Bureaucrat::incrementGrade() {
    if (_grade - 1 < highestGrade) {
        throw Bureaucrat::GradeTooHighException();
    }
    _grade--;
}

// Decrement grade
void Bureaucrat::decrementGrade() {
    if (_grade + 1 > lowestGrade) {
        throw Bureaucrat::GradeTooLowException();
    }
    _grade++;
}

// Exception messages
const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

void    Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << "." << std::endl;
    //} catch (Form::GradeTooLowException &e) {
    } catch (std::exception &e) { 
        std::cout << _name << " couldn’t sign " << form.getName() << " because " << e.what() << "." << std::endl;
    }
}

// Overload of the insertion operator
std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs ) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}
