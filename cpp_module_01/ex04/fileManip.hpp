/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileManip.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 06:15:31 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/15 06:15:32 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_MANIP_HPP
#define FILE_MANIP_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class fileManipulator {
    private:
        void replaceInstance(std::string& str, const std::string& oldStr, const std::string& newStr);
    public:
        fileManipulator();
        ~fileManipulator();
        void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2);
};

#endif
