/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 04:50:35 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/17 08:24:15 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[]) {
    std::string bin(av[0]);
    if (ac != 2) {
        std::cout << "Usage: " + bin + " <level>" << std::endl;
        return 1;
    }
    std::string input(av[1]);
    Harl        harl;
    harl.complain(input);

    return (0);
}
