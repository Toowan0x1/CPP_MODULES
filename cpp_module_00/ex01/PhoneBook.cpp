/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:13:01 by oel-houm          #+#    #+#             */
/*   Updated: 2023/08/16 23:13:02 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _currentIndex(0) {
    for (int i = 0; i < 8; ++i) {
        contacts[i] = Contact("", "", "", "", "");
    }
}

PhoneBook::~PhoneBook() {
    /**/
}

std::string PhoneBook::truncateString(const std::string& str, size_t length = 10) {
    if (str.length() <= length) {
        return (str);
    }
    return (str.substr(0, length - 1) + ".");
}

void    PhoneBook::addContact(const Contact& contact) {
    if (_currentIndex < 8) {
        contacts[_currentIndex++] = contact;
    }
    else {
        for (int i = 7; i > 0; i--) {
            contacts[i] = contacts[i - 1];
        }
        contacts[0] = contact;
    }
}

void    PhoneBook::searchContact() {
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < _currentIndex; ++i) {
        std::cout << std::setw(10) << i << "|" << std::setw(10) << truncateString(contacts[i].getFirstName()) << "|" << std::setw(10) << truncateString(contacts[i].getLastName()) << "|" << std::setw(10) << truncateString(contacts[i].getNickname()) << std::endl;
    }
    int index;
    std::cout << "Enter index to display contact details: ";
    std::cin >> index;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid index." << std::endl;
        return;
    }
    if (index >= 0 && index < _currentIndex) {
        contacts[index].displayContactInfo();
    } else {
        std::cout << "Invalid index." << std::endl;
        return;
    }
}

/*
ABOUT 'std::numeric_limits<std::streamsize>::max()'
- std::cin.ignore: This is a member function of the std::istream class, which is part of the C++ Standard Library's Input/Output Stream Library. It's used to ignore characters in the input buffer.
- std::numeric_limits<std::streamsize>::max(): This part provides the maximum representable value for the type std::streamsize. It essentially specifies the maximum number of characters to ignore.
- '\n': This specifies the delimiter or character until which the ignoring should occur. In this case, it's the newline character ('\n'). The function will ignore characters in the input buffer until it encounters a newline character.
*/
