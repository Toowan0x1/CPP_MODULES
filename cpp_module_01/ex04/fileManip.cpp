/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileManip.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-houm <oel-houm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 06:15:24 by oel-houm          #+#    #+#             */
/*   Updated: 2023/12/15 06:15:26 by oel-houm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileManip.hpp"

fileManipulator::fileManipulator() {
    // Constructor implementation
}

fileManipulator::~fileManipulator() {
    // Destructor implementation
}

void fileManipulator::replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream   inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open input file '" << filename << "'." << std::endl;
        return;
    }

    std::ofstream   outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to create or open output file '" << filename + ".replace" << "'." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        replaceInstance(line, s1, s2);
        outputFile << line << '\n';
    }

    std::cout << "Replacement completed successfully. Check '" << filename + ".replace" << "'." << std::endl;

    inputFile.close();
    outputFile.close();
}

void fileManipulator::replaceInstance(std::string& str, const std::string& oldStr, const std::string& newStr) {
    size_t pos = 0;
    while ((pos = str.find(oldStr, pos)) != std::string::npos) {
        str.replace(pos, oldStr.length(), newStr);
        pos += newStr.length();
    }
}
