/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 04:45:16 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/15 04:45:20 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileManip.hpp"

int main(int ac, char* av[]) {
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    
    std::string filename(av[1]);
    std::string s1(av[2]);
    std::string s2(av[3]);

    fileManipulator fileManip;
    fileManip.replaceInFile(filename, s1, s2);

    return 0;
}
