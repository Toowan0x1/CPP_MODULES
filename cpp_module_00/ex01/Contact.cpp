/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:52:40 by oel-houm          #+#    #+#             */
/*   Updated: 2023/08/15 21:58:30 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	/**/
}

Contact::Contact(const std::string& fname, const std::string& lname, const std::string& nickname, const std::string& phone, const std::string& secret)
    : _firstName(fname), _lastName(lname), _nickname(nickname), _phoneNumber(phone), _darkestSecret(secret) {
}

Contact::~Contact() {
	/**/
}

void	Contact::displayContactInfo() {
	std::cout << "First Name: " << _firstName << std::endl;
	std::cout << "Last Name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}

std::string	Contact::getFirstName() const {
	return _firstName;
}

std::string	Contact::getLastName() const {
	return _lastName;
}

std::string	Contact::getNickname() const {
	return _nickname;
}

getData::getData() {
	/**/
}

getData::getData(std::string& name) {
	(void)name;
}

getData::~getData() {
	/**/
}
