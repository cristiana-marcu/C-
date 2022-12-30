/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:39:54 by cmarcu            #+#    #+#             */
/*   Updated: 2022/12/30 13:00:43 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{    
    Zombie* horde = zombieHorde(10, "Hayn");
    
    for(int i = 0; i < 10; i++)
        horde[i].announce();
    
    delete [] horde;
    
    system("leaks zombie");
    return 0;
}