/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 06:20:18 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 06:20:19 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& humanName)
    : name(humanName) {};
    //: name(humanName), weapon(nullptr) {};

void    HumanB::setWeapon(const Weapon& newWeapon) {
    weapon = new Weapon(newWeapon.getType());
}

void    HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with thier " << weapon->getType() << std::endl;
    } //else {
        //std::cout << name << "is unarmed and cannot attack." << std::endl;
    //}
}
