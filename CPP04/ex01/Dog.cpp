/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:58:55 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/23 09:49:44 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal(){
    std::cout << "Dog constructor is called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Dog copy conscructor is called" <<std::endl;
    _brain = new Brain(*copy._brain);
}

Dog::~Dog(){
    std::cout << "Dog destructor is called" << std::endl;
    delete _brain;
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

Brain *Dog::getBrain() const{
	return _brain;
}