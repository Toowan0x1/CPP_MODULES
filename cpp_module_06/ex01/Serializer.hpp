/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:32:22 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/28 14:32:23 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
// #include <cstdint> // For uintptr_t

// Manual definition of uintptr_t for C++98
#if __SIZEOF_POINTER__ == 8
    typedef unsigned long uintptr_t;
#else
    typedef unsigned int uintptr_t;
#endif

class Serializer {
    public:
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif // SERIALIZER_HPP
