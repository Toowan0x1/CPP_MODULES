/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:41:51 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/31 17:41:52 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void    iter(T* array, unsigned int length, void (*func)(T&)) {
    for (unsigned int i = 0; i < length; ++i) {
        func(array[i]);
    }
}

#endif // ITER_HPP
