/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:52:43 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/18 16:52:44 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called for " << _name << "."<< std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name /*newName*/) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;

    std::cout << "ScavTrap constructor called for " << this->_name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called for " << _name << "." << std::endl; // this->_name
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        std::cout << "ScavTrap copy assignment operator called for " << _name << "." << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << _name << "." << std::endl;
}


void    ScavTrap::attack(const std::string& target) {
    std::cout << "ScavTrap " << _name << " attacks " << target << " with a special attack, causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!" << std::endl;
}
