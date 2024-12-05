/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:08:30 by oel-houm          #+#    #+#             */
/*   Updated: 2024/10/31 21:08:31 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    try {
        int target = 3;
        std::vector<int>::iterator it = easyfind(vec, target);
        std::cout << "Found " << target << " at position: " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        int target = 5;
        std::vector<int>::iterator it = easyfind(vec, target);
        std::cout << "Found " << target << " at position: " << std::distance(vec.begin(), it) << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
