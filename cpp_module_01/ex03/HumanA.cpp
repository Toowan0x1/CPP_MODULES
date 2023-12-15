/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 06:20:01 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 06:20:02 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& humanName, const Weapon& humanWeapon)
    : name(humanName), weapon(humanWeapon) {};

void    HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
