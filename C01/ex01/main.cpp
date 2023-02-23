/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 11:39:54 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/10 18:53:59 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{    
    Zombie* horde = zombieHorde(10, "Hayn");
    
    for(int i = 0; i < 10; i++)
        horde[i].announce();
    
    delete [] horde;
    
    return 0;
}