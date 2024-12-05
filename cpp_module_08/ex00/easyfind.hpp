/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:20:50 by oel-houm          #+#    #+#             */
/*   Updated: 2024/10/31 21:21:14 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& container, int f_occur) {
    typename T::iterator it = std::find(container.begin(), container.end(), f_occur);
    if (it == container.end()) {
        throw std::runtime_error("Not Found.");
    }
    return it;
}

#endif
