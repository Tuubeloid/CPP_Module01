/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:34:18 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/28 16:37:38 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceString(std::string &line, const std::string &s1, const std::string &s2) {
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) {
        // Replace the occurrence by constructing a new string
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        pos += s2.length(); // Move past the replacement
    }
}

int main(int argc, char *argv[]) {
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

    // Open the input file (use c_str() to convert std::string to const char*)
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << std::endl;
        return 1;
    }

    // Open the output file (use c_str() to convert std::string to const char*)
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not create output file " << filename << ".replace" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        replaceString(line, s1, s2);
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File successfully created: " << filename << ".replace" << std::endl;

    return 0;
}