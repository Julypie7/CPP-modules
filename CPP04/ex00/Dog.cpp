/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:58:55 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/22 15:37:07 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
    std::cout << "Dog constructor is called" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Dog copy conscructor is called" <<std::endl;
    *this = copy;
}

Dog::~Dog(){
    std::cout << "Dog destructor is called" << std::endl;

}

Dog::Dog(std::string Dog): Animal(Dog)
{
    std::cout << "Dog string constuctor is called" << std::endl;
    _type = Dog;
}


void Dog::makeSound(void) const{
    std::cout << "Dog is saying: Waf Waf" <<std::endl;
}

Dog &Dog::operator=(const Dog &assign)
{
    if (this != &assign)
        _type = assign._type;
    return (*this);
}