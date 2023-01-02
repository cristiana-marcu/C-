/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:33:06 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/02 20:12:24 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

private:
    Weapon& _weapon;
    std::string _name;

public:

    HumanA( std::string name,  Weapon& weapon );
    
    Weapon getWeapon( void );
    void setWeapon( Weapon& weapon);
    
    std::string getName( void );
    void setName( std::string name);
    
    void attack( void );
    
};


#endif