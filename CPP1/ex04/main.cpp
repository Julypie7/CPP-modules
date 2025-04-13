/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:17:05 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/13 15:38:33 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: number of arguments incorrect. \n" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    
    if (s1.empty() || s2.empty()){
        std::cerr << "Error: s1 cannot be empty.\n" << std::endl;
        return (1);
    }
    
    std::ifstream myReadFile(filename.c_str()); //c_str fpr char pointer
    if (!myReadFile){
        std::cerr << "Error: cannot open an input file.\n" << std::endl;
        return (1);
    }
    std::string outputFilename = filename + ".replace";
    std::ofstream myWriteFile(outputFilename.c_str());
    if (!myWriteFile){
        std::cerr << "Error: cannot create an output file.\n" << std::endl;
        return (1);
    }
    //myWriteFile << "Hola";

    std::string line;
    while (std::getline(myReadFile, line)) 
    {
        std::string new_line;
        size_t pos = 0;
        while (pos < line.length()) 
        {
            size_t found = line.find(s1, pos);
            if (found != std::string::npos) 
            {
                new_line.append(line, pos, found - pos);  
                new_line.append(s2);                    
                pos = found + s1.length();              
            } 
            else 
            {
                new_line.append(line, pos, line.length() - pos);
                break;
            }
        }
        myWriteFile << new_line << std::endl;
    }  
    myReadFile.close();
    myWriteFile.close();
}