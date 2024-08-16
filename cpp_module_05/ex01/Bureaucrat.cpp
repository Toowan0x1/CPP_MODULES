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

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if ( this != &rhs )
        _grade = rhs.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    _grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs ) {
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}
