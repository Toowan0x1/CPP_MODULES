/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:18:02 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/19 18:18:03 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap& other);
        FragTrap &operator=(const FragTrap& other);
        ~FragTrap();

        void    highFivesGuys(void);
};

#endif
