/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:02:54 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/30 16:20:39 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include <iostream>
#include <string>

int main() {
    std::string myString = "HI THIS IS BRAIN";
    std::string* stringPTR = &myString;
    std::string& stringREF = myString;

    std::cout << "String: " << myString << std::endl;
    std::cout << "String address: " << &myString << std::endl;
    std::cout << "stringPTR = " << stringPTR << std::endl;
    std::cout << "stringPTR address: " << &stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
    std::cout << "stringREF address: " << &stringREF << std::endl;

    return (0);
}