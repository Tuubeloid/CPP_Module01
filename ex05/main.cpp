/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:51:43 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/28 16:52:45 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    std::cout << "Testing DEBUG:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\nTesting INFO:" << std::endl;
    harl.complain("INFO");

    std::cout << "\nTesting WARNING:" << std::endl;
    harl.complain("WARNING");

    std::cout << "\nTesting ERROR:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nTesting invalid level:" << std::endl;
    harl.complain("INVALID");

    return 0;
}