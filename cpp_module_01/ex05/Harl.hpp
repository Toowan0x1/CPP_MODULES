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

#endif
