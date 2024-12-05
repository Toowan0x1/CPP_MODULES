/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:48:59 by oel-houm          #+#    #+#             */
/*   Updated: 2024/11/12 15:49:00 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        // Typedefs for convenience
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        
        // Constructor and Destructor
        MutantStack() {};
        MutantStack(const MutantStack& other) : std::stack<T>(other) {};
        virtual ~MutantStack() {};
        
        // Assignment operator
        MutantStack& operator=(const MutantStack& other) {
            if (this != &other) {
                std::stack<T>::operator=(other);
            }
            return *this;
        }

        // Iterators
        iterator begin() { return std::stack<T>::c.begin(); };
        iterator end() { return std::stack<T>::c.end(); };

        const_iterator begin() const { return std::stack<T>::c.begin(); };
        const_iterator end() const { return std::stack<T>::c.end(); };

        reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); };
        reverse_iterator rend() { return std::stack<T>::c.rend(); };

        const_reverse_iterator rbegin() const { return std::stack<T>::c.rbegin(); };
        const_reverse_iterator rend() const { return std::stack<T>::c.rend(); };
};

#endif // MUTANT_STACK_HPP
