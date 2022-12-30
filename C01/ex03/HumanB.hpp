/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:31:51 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 14:02:19 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

private:
    Weapon _weapon;
    std::string _name;

public:

    HumanB( std::string name );
    
    Weapon getWeapon( void );
    void setWeapon( Weapon weapon);
    
    std::string getName( void );
    void setName( std::string name);
    
    void attack( void );
    
};

#endif