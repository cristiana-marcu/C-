/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:39:58 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 12:54:19 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie {

private:
    std::string name;

public:
    Zombie();
    Zombie ( std::string name );
    ~Zombie();

    void announce( void );

    std::string getName();
    void setName( std::string name );
    
};

Zombie* zombieHorde( int N, std::string name );

#endif