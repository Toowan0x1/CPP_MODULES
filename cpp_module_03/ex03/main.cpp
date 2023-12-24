#include "DiamondTrap.hpp"

int main() {
    DiamondTrap toowan("Toowan");
    DiamondTrap toowan2(toowan);
    DiamondTrap toowan3(".");

    toowan.whoAmI();
    toowan2.whoAmI();
    toowan3 = toowan;
    toowan3.whoAmI();

    // Qualify the member function calls to resolve ambiguity
    toowan.ClapTrap::takeDamage(10);
    toowan.ClapTrap::beRepaired(10);

    return 0;
}
