/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:47:37 by oel-houm          #+#    #+#             */
/*   Updated: 2024/11/12 15:47:38 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept> /////
#include <algorithm>
#include <limits>
#include <iterator>

class Span {
    private:
        unsigned int maxCapacity;
        std::vector<int> numbers;
    public:
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        void    addNumber(int number);
        int     shortestSpan() const;
        int     longestSpan() const;
        // Method to add a range of numbers
        template <typename Iterator>
        void addRange(Iterator begin, Iterator end);
};

#endif
