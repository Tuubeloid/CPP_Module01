/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:51:01 by tvalimak          #+#    #+#             */
/*   Updated: 2024/09/28 16:52:45 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
private:
    // Private member functions corresponding to each log level
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    // Public complain method
    void complain( std::string level );
};

#endif