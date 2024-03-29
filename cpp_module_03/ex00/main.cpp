/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:12:08 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/17 16:12:09 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("CL4P-TR4P");

    claptrap.attack("Enemy1");
    claptrap.takeDamage(9);
    claptrap.beRepaired(1);
    claptrap.attack("Enemy2");

    return 0;
}
