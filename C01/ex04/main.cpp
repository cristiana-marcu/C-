/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:10:54 by cmarcu            #+#    #+#             */
/*   Updated: 2023/01/03 23:27:11 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream> 
#include <string>

void myReplace( std::string* buffer, std::string s1, std::string s2, int* pos ) {
    *pos = (*buffer).find(s1, *pos);
    if (*pos == -1)
        return;
    (*buffer).erase(*pos, s1.length());
    (*buffer).insert(*pos, s2);
    *pos += s2.length();
}

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

    std::stringstream buffer;
    buffer << ifs.rdbuf();
    
    int lastCoincidence = 0;
    std::string bufferStr = buffer.str();
    
    while (lastCoincidence != -1)
        myReplace(&bufferStr, argv[2], argv[3], &lastCoincidence);
	buffer.str(bufferStr);
    ofs << buffer.rdbuf();

    ifs.close();
    ofs.close();
    return 0;
}