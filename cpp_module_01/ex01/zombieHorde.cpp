/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 04:31:19 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 04:31:20 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie  *zombie = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombie[i].setName(name);
    }
    return (zombie);
}
