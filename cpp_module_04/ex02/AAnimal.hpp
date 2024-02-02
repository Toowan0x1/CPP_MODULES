/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:13:43 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 22:13:45 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal {
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& src);
        AAnimal& operator=(const AAnimal& rhs);
        virtual ~AAnimal() = 0;  // Pure virtual destructor
        
        std::string getType() const;
        virtual void makeSound() const = 0;  // Pure virtual function
};

#endif
