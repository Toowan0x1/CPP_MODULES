/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:47:27 by oel-houm          #+#    #+#             */
/*   Updated: 2024/11/12 15:47:29 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    return 0;
}

/* Another main to test addRange() FUNCTION:

int main() {
    Span spLarge(10000);
    std::vector<int> bigRange(10000);
    for (int i = 0; i < 10000; ++i) {
        bigRange[i] = i * 2;
    }
    spLarge.addRange(bigRange.begin(), bigRange.end())

    std::cout << "Shortest span: " << spLarge.shortestSpan() << std::endl;
    std::cout << "Longest span: " << spLarge.longestSpan() << std::endl;

    return 0;
}
*/
