/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:32:19 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 14:00:52 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon {

private:
    std::string _type;

public:
    Weapon();
    Weapon( std::string type);
    
    std::string getType() const;
    void setType( std::string type );

};

#endif