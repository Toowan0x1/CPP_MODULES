/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:12:22 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/18 16:44:25 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called for " << _name << "." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap parameterized constructor called for " << _name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name + "_copy"), _hitPoints(other._hitPoints), _energyPoints(other._hitPoints), _attackDamage(other._attackDamage) {
	std::cout << "ClapTrap copy constructor called for " << _name << "." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << "ClapTrap copy assignment operator called for " << _name << "." << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called for " << _name << "." << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is out of energy!." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= amount) {
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints <= amount) {
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}
