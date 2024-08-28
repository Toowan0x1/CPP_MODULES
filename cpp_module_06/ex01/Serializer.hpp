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
#include <cstdint> // For uintptr_t

class Serializer {
    static uintptr_t serializer(Data *ptr) {
        return reinterpret_cast<uintptr_t>(ptr);
    }
    static Data* deserialize(uintptr_t raw) {
        return reinterpret_cast<Data *>(raw);
    }
};

#endif // SERIALIZER_HPP
