/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 00:57:53 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/05 01:49:57 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <string>
#include <sstream>

Brain::Brain() {
    std::cout << "Brain default constructor called." << std::endl;
    for (int i = 0; i < 100; ++i) {
        std::ostringstream oss;
        //_ideas[i] = "Idea #" + std::to_string(i + 1);
        oss << "Idea #" << (i + 1);
        _ideas[i] = oss.str();
    }
    std::cout << "The constructed Brain filled with ideas." << std::endl;
}

Brain::Brain(const Brain& src) {
    std::cout << "Brain copy constructor called." << std::endl;
    *this = src;
}

Brain& Brain::operator=(const Brain& rhs)
{
    std::cout << "Brain assignment operator called." << std::endl;
    if (this != &rhs) {
        for (int i = 0; i < 100; ++i) {
            this->_ideas[i] = rhs._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called." << std::endl;
    for (int i = 0; i< 100; ++i) {
	    //delete this->_ideas[i];
    }
    // No need to delete or free the 'ideas' array, it's managed automatically
}

// void    Brain::generateIdeas() {
//     for (int i = 0; i < 100; ++i) {
//         _ideas[i] = "Idea #" + std::to_string(i + 1);
//     }
//     std::cout << "A brain has been constructed and filled with ideas\n";
// }
