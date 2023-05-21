/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 15:33:38 by cmarcu            #+#    #+#             */
/*   Updated: 2023/03/04 15:33:38 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

private:

public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const & rhs );
	FragTrap & operator=( FragTrap const & rhs );
	~FragTrap();

	void highFivesGuys();

};
