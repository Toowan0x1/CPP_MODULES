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
        // for (int i = 0; i < 7; i++) {
        //     contacts[i + 1] = contacts[i];
        // }
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
