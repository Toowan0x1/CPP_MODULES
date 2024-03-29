/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:43:06 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/17 15:43:06 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 _fixedPointValue;
        static const int    _fractionalBits = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();

        float   toFloat(void) const;
        int     toInt(void) const;

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

/*An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter.*/
std::ostream    &operator<<(std::ostream &ostream, const Fixed& obj);

#endif
