/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:02:54 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 19:06:59 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include <iostream>
#include <string>


int main() {
    std::string brain= "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "Brain String memory address: " << &brain<< std::endl;
    std::cout << "stringPTR memory address: " << &stringPTR << std::endl;
    std::cout << "Reference memory address: " << &stringREF << std::endl;
    
    std::cout << "Brain String value: " << brain<< std::endl;
    std::cout << "Reference string value: " << stringREF << std::endl;
    std::cout << "Value held by pointer: " << stringPTR << std::endl;
    std::cout << "Dereferenced pointer: " << *stringPTR << std::endl;


    return (0);
}