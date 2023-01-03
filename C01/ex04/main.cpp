/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:10:54 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/03 17:44:56 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream> 
#include <string>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        std::cout << "Invalid number of arguments" << std::endl;
        exit(1);
    }
    
    std::string filename = argv[1];
    std::ifstream ifs(filename, std::ifstream::in);
    if (ifs.fail()) {
        std::cout << "No such file" << std::endl;
        exit(1);
    }
    
    filename.append(".replace");
    std::ofstream ofs(filename, std::ofstream::out);
    if (ofs.fail()) {
        std::cout << "Unable to create file" << std::endl;
        exit(1);
    }
    ofs << ifs.rdbuf();

    std::stringstream ss;
    ss << ifs.rdbuf();
    std::cout << ss.str() << std::endl;
    std::string s = ss.str();
    std::cout << s << std::endl;
    ifs.close();
    ofs.close();
    return 0;
}