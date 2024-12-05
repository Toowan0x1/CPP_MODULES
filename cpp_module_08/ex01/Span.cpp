/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:47:46 by oel-houm          #+#    #+#             */
/*   Updated: 2024/11/12 15:47:47 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : maxCapacity(n) {}

Span::Span(const Span& other) : maxCapacity(other.maxCapacity), numbers(other.numbers) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        maxCapacity = other.maxCapacity;
        numbers = other.numbers;
    }
    return *this;
}

Span::~Span() {}

void    Span::addNumber(int number) {
    if (numbers.size() >= maxCapacity)
        throw std::out_of_range("Span is already full");
    numbers.push_back(number);
}

int Span::shortestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span");
    }

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
        
    int shortest = std::numeric_limits<int>::max();
    for (unsigned int i = 1; i < sortedNumbers.size(); ++i) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < shortest)
            shortest = span;
    }
    return shortest;
}

int Span::longestSpan() const {
    if (numbers.size() < 2) {
        throw std::logic_error("Not enough numbers to find a span");
    }

    int minElement = *std::min_element(numbers.begin(), numbers.end()); //*, dereference the iterator pointing to the smallest n in the vector
    int maxElement = *std::max_element(numbers.begin(), numbers.end());
    return maxElement - minElement;
}

template <typename Iterator> // accepting any type of iterator eg: list, vector, array, etc..
void Span::addRange(Iterator begin, Iterator end) {
    if (std::distance(begin, end) + numbers.size() > maxCapacity) {
        throw std::out_of_range("Adding this range would exceed Span's capacity");
    }
    numbers.insert(numbers.end(), begin, end);
}

// Explicit instantiation for the types you expect:
template void Span::addRange<std::vector<int>::iterator>(std::vector<int>::iterator, std::vector<int>::iterator);

/*
we have a vector list:
6, 3, 17, 9, 11
we gonna sort them, so we have:
3, 6, 9, 11, 17
calculating shortest span, will be like this:
6 - 3 = 3
9 - 6 = 3
11 - 9 = 2
17 - 11 = 6
so, the shortest span is: 2
calculating the longest span, will be like this:
17 - 3 = 14
*/
