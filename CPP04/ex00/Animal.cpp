/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:19:01 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/22 15:25:34 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructor is called" << std::endl;
    _type = "Animal";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy conscructor is called" <<std::endl;
    *this = copy;
}

Animal::~Animal(){
    std::cout << "Animal destructor is called" << std::endl;

}

Animal::Animal(std::string animal)
{
    std::cout << "Animal string constuctor is called" << std::endl;
    _type = animal;
}

std::string Animal::getType(void) const 
{
    return (_type);
}

void Animal::makeSound(void) const{
    std::cout << "Making scary animal sound" <<std::endl;
}

Animal &Animal::operator=(const Animal &assign)
{
    if (this != &assign)
        _type = assign._type;
    return (*this);
}