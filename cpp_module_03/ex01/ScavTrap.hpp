/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:52:53 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/18 16:52:54 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap // this one
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string &name); // std::string name /*ScavTrap(const std::string& newName);*/
        ScavTrap(const ScavTrap& other);
        ScavTrap &operator=(const ScavTrap& other); //ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap() override;

        void  attack(const std::string& target); /*void  attack(const std::string& target) override; // Override attack function*/
        void  guardGate();
};

#endif
