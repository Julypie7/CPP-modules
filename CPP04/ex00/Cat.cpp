/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:55:53 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/22 15:37:18 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
    std::cout << "Cat constructor is called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Cat copy conscructor is called" <<std::endl;
    *this = copy;
}

Cat::~Cat(){
    std::cout << "Cat destructor is called" << std::endl;

}

Cat::Cat(std::string Cat): Animal(Cat)
{
    std::cout << "Cat string constuctor is called" << std::endl;
    _type = Cat;
}


void Cat::makeSound(void) const{
    std::cout << "Cat is saying: Miau Miau" <<std::endl;
}

Cat &Cat::operator=(const Cat &assign)
{
    if (this != &assign)
        _type = assign._type;
    return (*this);
}