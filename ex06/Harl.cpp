/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:51:25 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/30 15:05:16 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Implement the private complaint methods
void Harl::debug( void ) {
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info( void ) {
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!\n";
}

void Harl::warning( void ) {
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void ) {
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

// Implement the complain method with a switch statement
void Harl::complain( std::string level ) {
    // Define an array of levels for comparison
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    // Find the index of the provided level in the array
    int levelIndex = -1;
    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            levelIndex = i;
            break;
        }
    }

    switch (levelIndex)
    {
        case 0:
            this->debug();
            // Intentional fall-through
        case 1:
            this->info();
            // Intentional fall-through
        case 2:
            this->warning();
            // Intentional fall-through
        case 3:
            this->error();
            // Intentional fall-through
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}