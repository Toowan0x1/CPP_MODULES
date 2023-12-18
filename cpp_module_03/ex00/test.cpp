#include <iostream>
#include <string>

class ClapTrap {
private:
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;

public:
    // Constructor
    ClapTrap(const std::string& name)
        : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0) {}

    // Public member functions
    void attack(const std::string& target) {
        if (HitPoints > 0 && EnergyPoints > 0) {
            std::cout << "ClapTrap " << Name << " attacks " << target << " and causes "
                      << AttackDamage << " hit points of damage." << std::endl;
            EnergyPoints--;
        } else {
            std::cout << "ClapTrap can't attack. No hit points or energy points left." << std::endl;
        }
    }

    void takeDamage(unsigned int amount) {
        if (HitPoints > 0) {
            HitPoints = (amount > HitPoints) ? 0 : HitPoints - amount;
            std::cout << "ClapTrap " << Name << " takes " << amount << " damage. "
                      << "Remaining hit points: " << HitPoints << std::endl;
        } else {
            std::cout << "ClapTrap has no hit points left." << std::endl;
        }
    }

    void beRepaired(unsigned int amount) {
        if (HitPoints > 0 && EnergyPoints > 0) {
            HitPoints += amount;
            EnergyPoints--;
            std::cout << "ClapTrap " << Name << " is repaired for " << amount << " hit points. "
                      << "Remaining hit points: " << HitPoints << std::endl;
        } else {
            std::cout << "ClapTrap can't be repaired. No hit points or energy points left." << std::endl;
        }
    }
};

int main() {
    ClapTrap claptrap("CL4P-TP");

    claptrap.attack("Enemy1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("Enemy2");

    return 0;
}

