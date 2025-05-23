/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:00:50 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/22 15:43:58 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
    std::cout << "WrongCat constructor is called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal()
{
    std::cout << "WrongCat copy conscructor is called" <<std::endl;
    *this = copy;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor is called" << std::endl;

}


void WrongCat::makeSound(void) const{
    std::cout << "Wrong Cat is saying: Completely wrong Miau Miau" <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
    if (this != &assign)
        _type = assign._type;
    return (*this);
}