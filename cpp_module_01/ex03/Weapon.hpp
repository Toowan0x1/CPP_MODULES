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
        std::string type; // _type
    public:
        Weapon(const std::string& weaponType);
        ~Weapon();
        const std::string&  getType(void) const;
        void                setType(const std::string& newType);
};

#endif
