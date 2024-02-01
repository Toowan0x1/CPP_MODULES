/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 22:13:18 by oel-houm          #+#    #+#             */
/*   Updated: 2024/02/01 22:13:21 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ""

int main()
{
    const Animal *meta = New Animal();
    const Animal* j = Dog();
    const Animal* i = Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    /// ...
    return 0;
}
