/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:51:25 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/28 16:52:45 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Private member functions implementation
void Harl::debug( void ) {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

// Public complain method implementation
void Harl::complain( std::string level ) {
    // Define an array of member function pointers
    void (Harl::*actions[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    // Define corresponding string levels
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    // Match the input level to the appropriate member function
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            // Call the appropriate member function
            (this->*actions[i])();
            return;
        }
    }

    // If no valid level is provided
    std::cerr << "Invalid level: " << level << std::endl;
}