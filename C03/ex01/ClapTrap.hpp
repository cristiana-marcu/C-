/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:48:12 by cmarcu            #+#    #+#             */
/*   Updated: 2023/05/21 16:10:32 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class ClapTrap {

protected:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const & rhs );
	ClapTrap & operator=( ClapTrap const & rhs );
	~ClapTrap();

	std::string getName( void ) const;
	unsigned int getHitPoints( void ) const;
	unsigned int getEnergyPoints( void ) const;
	unsigned int getAttackDamage( void ) const;

	void setName( std::string name );
	void setHitPoints( unsigned int );
	void setEnergyPoints( unsigned int );
	void setAttackDamage( unsigned int );

	void attack( std::string const & target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

};

std::ostream & operator<<(std::ostream &o, ClapTrap const & obj);
