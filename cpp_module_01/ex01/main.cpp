/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 04:31:06 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 04:31:07 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 5

int main(void)
{
    Zombie *zombie = zombieHorde(N, "zombie");
    for (int i = 0; i < N; i++) {
        zombie->announce();
    }
    delete[] zombie;
    return 0;
}
