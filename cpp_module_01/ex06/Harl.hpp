/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 04:50:42 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/17 08:24:36 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>

class Harl {
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
};

typedef void (Harl::*t_func) (void);
