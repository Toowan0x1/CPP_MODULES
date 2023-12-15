/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 04:31:25 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 04:31:26 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void);
        Zombie* newZombie(std::string name);
        //Zombie* zombieHorde(int N, std::string name);
        void    setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name); // it works fine after shifting it here

#endif
