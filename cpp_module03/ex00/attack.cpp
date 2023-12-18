void    ClapTrap::attack( std::string const& target )
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints -= 1;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
    _hitPoints -= amount;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (_energyPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energyPoints -= 1;
    _hitPoints += amount;
}
