/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 06:20:31 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 06:20:32 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon*     weapon;
    public:
        HumanB(const std::string& humanName);
        void    setWeapon(Weapon& newWeapon);
        void    attack() const;
};

#endif
