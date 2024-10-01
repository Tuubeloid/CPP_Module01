/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:34:18 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/01 16:57:17 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "StringReplacer.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    // Check if the file is empty
    if (inputFile.peek() == std::ifstream::traits_type::eof()) {
        std::cerr << "Warning: The file " << filename << " is empty." << std::endl;
        inputFile.close();
        return 0;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;
        return 1;
    }

    std::string line;
    bool hasReplacements = false;
    while (std::getline(inputFile, line)) {
        std::string originalLine = line; // Store the original line for comparison
        StringReplacer::replaceString(line, s1, s2);

        // Check if the line was modified (i.e., if any replacements occurred)
        if (line != originalLine) {
            hasReplacements = true;
        }

        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    if (hasReplacements) {
        std::cout << "File successfully created: " << filename << ".replace" << std::endl;
    } else {
        std::cout << "No replacements made in the file: " << filename << std::endl;
    }

    return 0;
}
