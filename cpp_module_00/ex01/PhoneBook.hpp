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
        Contact     contacts[8];
        int         _currentIndex;
        std::string truncateString(const std::string& str, size_t length);
    public:
        PhoneBook();
        ~PhoneBook();

        void    addContact(const Contact& contact);
        void    searchContact();
};

#endif
