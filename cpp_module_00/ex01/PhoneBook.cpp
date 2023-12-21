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

PhoneBook::PhoneBook() : currentIndex(0) {
    /**/
}

std::string PhoneBook::truncateString(const std::string& str, int length = 10) {
    if (static_cast<int>(str.length()) <= length) {
        return (str);
    }
    return (str.substr(0, length - 1) + ".");
}

PhoneBook::~PhoneBook() {
    for (int i = 0; i < currentIndex; ++i)
    {
        delete contacts[i];
    }
}

void    PhoneBook::addContact(const Contact& contact) {
    if (currentIndex < 8) {
        contacts[currentIndex++] = new Contact(contact); //this
    } else {
        delete contacts[0];
        for (int i = 0; i < 7; i++) {
            contacts[i] = contacts[i + 1];
        }
        contacts[7] = new Contact(contact);
    }
}

void    PhoneBook::searchContact() {
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < currentIndex; ++i) {
        std::cout << std::setw(10) << i << "|" << std::setw(10) << truncateString(contacts[i]->getFirstName()) << "|" << std::setw(10) << truncateString(contacts[i]->getLastName()) << "|" << std::setw(10) << truncateString(contacts[i]->getNickname()) << std::endl;
    }
    int index;
    std::cout << "Enter index to display contact details: ";
    std::cin >> index;
    // ==================================
    if (std::cin.fail()) {
        // Handle invalid input (non-integer)
        std::cin.clear(); // Clear the fail bit
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Invalid input. Please enter a valid index." << std::endl;
        return;
    }
    if (index >= 0 && index < currentIndex) {
        contacts[index]->displayContactInfo();
    } else {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    // ==================================
    /*
    if (std::isalpha(index) || std::isdigit(index) != 1)
    else if (std::isdigit(index) && index >= 0 && index < currentIndex)
    else
        std::cout << "Invalid index.";
        return;
    */
}