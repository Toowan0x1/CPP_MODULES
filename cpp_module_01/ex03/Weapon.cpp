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

Weapon::Weapon(const std::string& weaponType)
    : type(weaponType) {};

Weapon::~Weapon() {
    // Any necessary cleanup for the Weapon class goes here
}

const std::string&  Weapon::getType(void) const {
    return this->type; //this
};

void                Weapon::setType(const std::string& newType) {
    this->type = newType; //this
};
