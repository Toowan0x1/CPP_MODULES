/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:10:02 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/31 17:10:03 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(const T &a, const T &b) {
    if (b < a)
        return b;
    else
        return a;
}

template<typename T>
T max(const T &a, const T &b) {
    if (a > b)
        return a;
    else
        return b;
}

#endif // WHATEVER_HPP
