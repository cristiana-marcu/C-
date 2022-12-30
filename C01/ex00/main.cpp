/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:39:54 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 12:49:37 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
    Zombie* zombie = new Zombie(name);
    return zombie;
}

void randomChump( std::string name ) {
    Zombie zombie = Zombie(name);
    zombie.announce();
}

int main()
{
    Zombie *bob = newZombie("Bob");
    bob->announce();
    delete bob;
    
    randomChump("Margo");
    
    return 0;
}