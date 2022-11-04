/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:56:43 by cmarcu            #+#    #+#             */
/*   Updated: 2022/11/03 19:21:54 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main (int argc, char *argv[]) 
{
    size_t len;
    std::string str;

    if (argc != 1)
    {
        for (int i = 1; i < argc; i++)
        {
            str = argv[i];
            len = str.length();
            for (size_t j = 0; j < len; j++)
                str[j] = char(std::toupper(str[j]));
            std::cout << str << " ";
        }
        std::cout << std::endl;
        return (0);
    }
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}