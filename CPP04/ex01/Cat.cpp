/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:55:53 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/23 09:49:19 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal(){
    std::cout << "Cat constructor is called" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Cat copy conscructor is called" <<std::endl;
    _brain = new Brain(*copy._brain);
}

Cat::~Cat(){
    std::cout << "Cat destructor is called" << std::endl;
    delete _brain;
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

Brain *Cat::getBrain() const{
	return _brain;
}