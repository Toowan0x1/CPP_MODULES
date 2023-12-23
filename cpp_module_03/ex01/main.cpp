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
    ScavTrap toowan2(toowan);

    ash.attack("the alien");
    ash.takeDamage(10);
    ash.beRepaired(10);
    ash.guardGate();

    return 0;
}
