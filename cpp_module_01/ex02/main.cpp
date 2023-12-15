/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:09:29 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/14 05:09:31 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << &string << " " << string << std::endl;
    std::cout << stringPTR << " " << *stringPTR << std::endl;
    std::cout << &stringREF << " " << stringREF << std::endl;

    return 0;
}
