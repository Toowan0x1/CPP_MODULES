/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:31:22 by oel-houm          #+#    #+#             */
/*   Updated: 2023/08/16 22:32:00 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
    PhoneBook   phonebook;

    /**/for (int i = 0; i < 8; ++i) {
        std::string fname = "omar";
        std::string lname = "elhoumadi";
        std::string nickname ="matrixMan";
        std::string phone = "212";
        std::string secret = "noSecret";
        Contact contact(fname, lname, nickname, phone, secret);
        phonebook.addContact(contact);
    }/**/
    std::string command;
    while (command.compare("EXIT"))
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command.compare("ADD") == 0) {
            std::string first, last, nick, phone, secret;
            std::cout << "Enter First Name: ";
            std::cin >> first;
            std::cout << "Enter Last Name: ";
            std::cin >> last;
            std::cout << "Enter Nickname: ";
            std::cin >> nick;
            std::cout << "Enter Phone Number: ";
            std::cin >> phone;
            std::cout << "Enter Darkest Secret: ";
            std::cin >> secret;
            Contact contact(first, last, nick, phone, secret);
            phonebook.addContact(contact);
        } else if (command.compare("SEARCH") == 0) {
            phonebook.searchContact();
        } else if (command.compare("EXIT") == 0) {
            break ;
        } else if (command.compare("EXIT")) {
            std::cout << "Invalid command." << std::endl;
        }
    }
    return (0);
}
