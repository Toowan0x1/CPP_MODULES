/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:52:44 by oel-houm          #+#    #+#             */
/*   Updated: 2024/08/18 17:52:45 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
    Intern intern;
    AForm* rrf;

    rrf = intern.makeForm("robotomy request", "Bender");
    if (rrf) {
        std::cout << *rrf << std::endl;
        delete rrf;
    }

    rrf = intern.makeForm("invalid form request", "Bender");
    if (rrf) {
        delete rrf;
    }

    return 0;
}
