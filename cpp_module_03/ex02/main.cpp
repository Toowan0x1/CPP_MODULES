#include "FragTrap.hpp"

int main( void )
{
    FragTrap ashely("Ashely");

    ashely.attack("the alien");
    ashely.takeDamage(10);
    ashely.beRepaired(10);
    
    FragTrap toowan = ash;
    toowan.takeDamage(100);
    toowan.takeDamage(100);
    toowan.beRepaired(10);
    ashely.takeDamage(10);

    ashely.highFivesGuys();

    return 0;
}
