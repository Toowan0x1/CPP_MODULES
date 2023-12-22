/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 06:20:41 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 06:20:42 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    /**/
}

Weapon::Weapon(const std::string& weaponType)
    : _type(weaponType) {}

void    Weapon::setType(const std::string newType) {
    this->_type = newType;
}

const std::string&  Weapon::getType(void) const {
    return this->_type;
}

Weapon::~Weapon() {
    /**/
}
