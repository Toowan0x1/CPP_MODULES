/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:43:18 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/29 22:43:19 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>  // For rand()
#include <typeinfo>
#include "Identify.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base* generate(void) {
    int randValue = rand() % 3;

    if (randValue == 0)
        return (new A);
    else if (randValue == 1)
        return (new B);
    else
        return (new C);
}

void    Identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))   
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void    Identify(Base& p) {
    try {
        A& aRef = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)aRef;
    } catch (const std::exception& e) {}
    
    try {
        B& bRef = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)bRef;
    } catch (const std::exception& e) {}

    try {
        C& cRef = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)cRef;
    } catch (const std::exception& e) {}
}
