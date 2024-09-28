/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:44:42 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/28 13:59:35 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();

    void announce() const;
};

// Function declarations
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif