/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:05:25 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/28 16:07:10 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    // Step 1: Create a string variable
    std::string str = "HI THIS IS BRAIN";

    // Step 2: Create a pointer to the string
    std::string* stringPTR = &str;

    // Step 3: Create a reference to the string
    std::string& stringREF = str;

    // Step 4: Print memory addresses
    std::cout << "Memory address of the string variable: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    // Step 5: Print values
    std::cout << "Value of the string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value held by stringREF: " << stringREF << std::endl;

    return 0;
}