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
#include <cstring>
#include <string>
#include <limits>

class	Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		Contact();
		Contact(const std::string& fname, const std::string& lname, const std::string& nickname, const std::string& phone, const std::string& secret);
		~Contact();
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		
		void	displayContactInfo();
};

#endif
