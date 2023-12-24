/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 02:15:56 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/20 02:15:57 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap() {
    this->_name = name;
    this->_name = name + "_clap_name"; // use _name directly, without the class name (this->ClapTrap::_name = name + "_clap_name";)
    
    FragTrap::_hitPoints = 100;
    ScavTrap::_energyPoints = 50;
    FragTrap::_attackDamage = 30;
    
    std::cout << "DiamondTrap parameterized constructor called for " << this->_name << " ." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called for " << this->_name << "." << std::endl;
}

void    DiamondTrap::whoAmI(void) {
    std::cout << "I'm a DiamondTrap named " << this->_name << ", ClapTrap name: " << this->_name << std::endl;
}
