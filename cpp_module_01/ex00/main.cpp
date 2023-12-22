/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 04:29:49 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 04:29:51 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    std::string name;

    std::cout << "Creating zombie 1." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie zombi1(name);
    
    std::cout << "Creating zombie 2." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie *zombi2 = newZombie(name);
    zombi2->announce();
    delete zombi2;

    std::cout << "Calling randomChump()." << std::endl;
    randomChump("Fester");
    return 0;
}
