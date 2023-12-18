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

// Default Constructor
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called for " << _name << std::endl;
}

// Constructor with parameters
ClapTrap::ClapTrap(const std::string& newName): _name(newName), _hitPoints(10), _energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap constructor called for " << _name << std::endl;
}

// Copy constructor
/* ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    *this = rhs;
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return;
} */
ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name + "_copy"), _hitPoints(other._hitPoints), _energyPoints(other._hitPoints), _attackDamage(other._attackDamage) {
	std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator(const ClapTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		std::cout << "ClapTrap copy assignment operator called for " << _name << std::endl;
	}
	return *this;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

/*
std::cout << "ClapTrap " << name << " can't attack. No hit points or energy points left!" << std::endl;

std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;

std::cout << "ClapTrap " << name << " is already defeated. No hit points left!" << std::endl;

std::cout << "ClapTrap " << name << " takes " << amount << " points of damage. Remaining hit points: " << hitPoints << std::endl;

std::cout << "ClapTrap " << name << " can't be repaired. It's already defeated!" << std::endl;

std::cout << "ClapTrap " << name << " is repaired for " << amount << " points. Remaining hit points: " << hitPoints << std::endl;
*/

void	ClapTrap::attack(const std::string& target) {
	if (_energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << "is out of energy!." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << "attacks " << _target << ", causing " << _attackDamage << "points of damage!" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= amount) {
		std::cout << "ClapTrap " << _name << "is dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << "takes " << amount << " damage!" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints <= amount) {
		std::cout << "ClapTrap " << _name << "is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}
