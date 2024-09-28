/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:45:41 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/28 15:42:53 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    int N = 5; // Number of zombies
    Zombie* horde = zombieHorde(N, "Zombie");

    if (horde)
    {
        delete[] horde; // Delete the horde to avoid memory leaks
    }

    return 0;
}