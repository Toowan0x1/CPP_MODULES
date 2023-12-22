/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 06:20:11 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 06:20:12 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon      &weapon;
    public:
        HumanA(const std::string& humanName, Weapon& humanWeapon);
        void    attack() const;
};

#endif
