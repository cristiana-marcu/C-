/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:33:58 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/04 15:33:58 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

protected:
	static const int _EP = 50;

public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & rhs );
	ScavTrap & operator=( ScavTrap const & rhs );
	~ScavTrap();

	void attack(std::string const & target);
	void guardGate();

};
