/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:48:29 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/22 15:26:12 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal constructor is called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy conscructor is called" <<std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor is called" << std::endl;

}

WrongAnimal::WrongAnimal(std::string WrongAnimal)
{
    std::cout << "WrongAnimal string constuctor is called" << std::endl;
    _type = WrongAnimal;
}

std::string WrongAnimal::getType(void) const 
{
    return (_type);
}

void WrongAnimal::makeSound(void) const{
    std::cout << "Making wrong WrongAnimal sound" <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
    if (this != &assign)
        _type = assign._type;
    return (*this);
}