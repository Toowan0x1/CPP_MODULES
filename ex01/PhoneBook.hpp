/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:52:20 by oel-houm          #+#    #+#             */
/*   Updated: 2023/08/16 21:52:23 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact*    contacts[8];
        int         currentIndex;
        std::string truncateString(const std::string& str, int length = 10) {
            if (static_cast<int>(str.length()) <= length) {
                return (str);
            }
            return (str.substr(0, length - 1) + ".");
        }
    public:
        PhoneBook() : currentIndex(0) {};
        ~PhoneBook() {
            for (int i = 0; i < currentIndex; ++i) //fix later
            {
                delete  contacts[i];
            }
        }
        void    addContact(const Contact& contact);
        void    searchContact();
};

#endif
