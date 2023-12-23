#include "FragTrap.hpp"

int main( void )
{
    FragTrap ash("Ash");

    ash.attack( "the air" );
    ash.takeDamage(10);
    ash.beRepaired(10);
    
    FragTrap toowan = ash;
    toowan.takeDamage(100);
    toowan.takeDamage(100);
    toowan.beRepaired(10);
    ash.takeDamage(10);

    ash.highFivesGuys();

    return 0;
}
