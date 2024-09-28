/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:16:39 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/28 15:48:17 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0) return NULL;

    // Allocate an array of Zombies
    Zombie* horde = new Zombie[N];

    // Initialize each zombie's name using placement new or constructor initialization
    for (int i = 0; i < N; ++i)
    {
        // Directly initialize each Zombie with the provided name
        new (&horde[i]) Zombie(name); // Placement new to construct in place
        horde[i].announce();
    }
    
    return horde;
}