/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:12:08 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/19 18:40:08 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap toowan("Toowan");
    ScavTrap ashely(toowan);

    toowan.attack("the alien");
    toowan.takeDamage(10);
    toowan.beRepaired(10);
    toowan.guardGate();

    return 0;
}
