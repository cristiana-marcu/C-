/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:10:54 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/03 13:34:54 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;
    if (argc != 2)
        std::cout << "Please type: 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
    else
        harl.complain(argv[1]);
    return 0;
}