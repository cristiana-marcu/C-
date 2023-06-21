/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:09:10 by cmarcu            #+#    #+#             */
/*   Updated: 2023/06/21 20:06:00 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Brain {

protected:
	std::string _ideas[100];

public:
	Brain( void );
	Brain( Brain const & ref);
	Brain & operator=( Brain const & rhs );
	~Brain();

	std::string getIdea(int i);
	void setIdea(int i, std::string idea);
};
