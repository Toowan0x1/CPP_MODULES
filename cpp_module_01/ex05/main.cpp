/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 04:50:35 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/15 04:50:36 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl        harl;
    std::string input;

    while (1) {
        if (!input.compare("exit"))
            break ;
        std::cout << "Enter a level: ";
        std::cin >> input;
        harl.complain(input);
    }
    return 0;
}
