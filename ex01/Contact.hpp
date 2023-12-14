/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:33:54 by oel-houm          #+#    #+#             */
/*   Updated: 2023/08/15 14:51:08 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstring> //
#include <string>
#include <limits>

/*

con()
copy con()
copy assgign
param cons
des

*/

class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		//: _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""), _darkestSecret("") {}
		/* Constructor Declaration:
		Contact(: This indicates the beginning of the constructor definition.
		const std::string& fname, const std::string& lname, const std::string& nickname,
		const std::string& phone, const std::string& secret): These are the parameters 
		of the constructor. It takes five parameters, all of which are references to 
		constant strings (const std::string&). These parameters represent the information
		 needed to initialize a Contact object, such as first name, last name, nickname,
		  phone number, and darkest secret.
		*/
		// ':': member initialization list.
		Contact(const std::string& fname, const std::string& lname, const std::string& nickname, const std::string& phone, const std::string& secret)
		: _firstName(fname), _lastName(lname), _nickname(nickname), _phoneNumber(phone), _darkestSecret(secret) {}
		//: _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""), _darkestSecret("") {}
		//~Contact();
		std::string	getFirstName() const { return _firstName; }
		std::string	getLastName() const { return _lastName; }
		std::string	getNickname() const { return _nickname; }
		void	displayContactInfo();
};

#endif

 //clang++ -std=c++98 -o phone main.cpp

/*void addContact(const Contact& contact) {
//    std::cout << currentIndex << std::endl;
if (currentIndex <= 7) {
std::cout << currentIndex << std::endl;
contacts[currentIndex++] = contact;
} else {
currentIndex = 0;
std::cout << currentIndex << std::endl;
contacts[currentIndex++] = contact;
}
}*/

// Calls the constructor defined in the public section
//Contact contact; // Calls the constructor implementation with default values
