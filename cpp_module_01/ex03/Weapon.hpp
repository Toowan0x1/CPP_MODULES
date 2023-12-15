/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 06:20:47 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 06:20:48 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(const std::string& weaponType) : type(weaponType) {};
        ~Weapon();
        const std::string&  getType(void) const { return type; }
        void                setType(std::string& newType) { type = newType; }
};

/*
HumanA and HumanB are almost the same except for these two tiny details:
• While HumanA takes the Weapon in its constructor, HumanB doesn’t.
• HumanB may not always have a Weapon, whereas HumanA will always be armed

A private attribute type, which is a string.
*/

class HumanA {
    private:
        std::string name;
        Weapon  weapon;
    public:
        // HumanB(const std::string& humanName) 
        // : name(humanName), weapon(nullptr) {}
        HumanA(const std::string);
        //attack() =>  <name> attacks with their <weapon type>
};

class HumanB {
    private:
        std::string name;
        Weapon*     weapon; // HumanB may not always have a Weapon
    public:
        //attack() =>  <name> attacks with their <weapon type>
};

#endif
