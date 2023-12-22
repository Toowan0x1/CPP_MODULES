/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 04:50:48 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/15 04:50:49 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    /**/
}

Harl::~Harl() {
    /**/
}

void    Harl::debug( void ) {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n" << std::endl;
}

void    Harl::info( void ) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error( void ) {
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

// Comaplain based on the level passed as a parameter
void    Harl::complain( std::string level ) {
    t_func funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int i = 0;
    while (i < 4 && levels[i].compare(level)) {
        i++;
    }
    if (i < 4)
        (this->*funcs[i])();
}
