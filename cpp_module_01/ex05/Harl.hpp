/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 04:50:42 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/15 04:50:43 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <map> // remove it later

class Harl {
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    public:
        Harl();
        ~Harl();
        void    complain( std::string level );
};

typedef void (Harl::*t_func) ( void );

/*
The goal of this exercise is to use pointers to member functions.
=================================================================
The type t_func is a pointer to a member function of the Harl class.
When you declare a variable of type t_func, you can use that variable to store the address of a specific member function of the Harl class.
t_func      is the type representing a pointer to a member function.
(Harl::*)   specifies that it's a member function pointer for the Harl class.

So, when you declare a variable like:
    t_func myFunctionPointer;
you can later assign it the address of a member function of an instance of the Harl class,
and then you can use that variable to call the member function through the pointer.

So, t_func is a type that represents a pointer to a member function of the class Harl that takes no arguments and returns void.
This can be used to declare variables of this type, and those variables can then be assigned the addresses of specific member 
functions of the Harl class. Here's an example of how you might use this type:
*/
#endif

/*
// Function to complain based on the level passed as a parameter
    void complain(std::string level) {
        // Map the level to the corresponding member function using a dictionary
        std::map<std::string, t_func> levelMap = {
            {"DEBUG", &Harl::debug},
            {"INFO", &Harl::info},
            {"WARNING", &Harl::warning},
            {"ERROR", &Harl::error}
        };

        // Find the appropriate member function based on the level
        auto it = levelMap.find(level);
        if (it != levelMap.end()) {
            // Call the member function using the pointer
            (this->*(it->second))();
        } else {
            // Handle unknown level
            std::cout << "Unknown level: " << level << std::endl;
        }
    }
*/