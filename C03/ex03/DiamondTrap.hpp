/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:06:58 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/06 21:12:48 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONTRAP_HPP
#define DIAMONTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
    std::string _name;

public:
    DiamondTrap( void );
    DiamondTrap( std::string name );
    DiamondTrap( DiamondTrap const & rhs );
    DiamondTrap & operator=( DiamondTrap const & rhs );
    ~DiamondTrap();

    void attack(std::string const & target);
    void whoAmI( void );
};

#endif