/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:17:55 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/19 18:17:56 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap constructor called for " << _name << "." << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "FragTrap parameterized constructor called for " << _name << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called for " << _name << "." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        std::cout << "FragTrap copy assignment operator called for " << _name << "." << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << _name << "." << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    if (_energyPoints <= 0) {
        std::cout << "FragTrap " << _name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap Positive high fives request from " << _name << "!" << std::endl;
    _energyPoints -= 1;
}
