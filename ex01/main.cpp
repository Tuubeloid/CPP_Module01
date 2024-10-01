/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:45:41 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/01 16:08:19 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    int N = 21474; // Default number of zombies
    if (N > 2147483647)
    {
        std::cerr << "Number of zombies exceeds maximum limit: " << 2147483647 << std::endl;
        return 1; // Exit with error code
    }
    Zombie* horde = NULL;
    try
    {
        horde = zombieHorde(N, "Zombie");
    }
    catch (const std::bad_alloc& e)
    {
        std::cerr << "Failed to allocate memory for zombie horde: " << e.what() << std::endl;
        return 1; // Exit with error code
    }
    if (horde)
    {
        delete[] horde; // Delete the horde to avoid memory leaks
    }
    return 0;
}