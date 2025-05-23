/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:07:06 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/23 14:59:54 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *animal = new Animal();
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    
    std::cout << "Animal type of dog " << dog->getType() << " " << std::endl;
    std::cout << "Animal type of cat " << cat->getType() << " " << std::endl;
    dog->makeSound();
    cat->makeSound();
    animal->makeSound();

    std::cout << std::endl;
    
    WrongAnimal *wrong_animal = new WrongAnimal();
    WrongAnimal *wrong_cat = new WrongCat();
    wrong_animal->makeSound();
    std::cout << "Wrong cat is making sound: "<< std::endl;
    wrong_cat->makeSound();

    std::cout << std::endl;

    delete animal;
    delete cat;
    delete dog;
    delete wrong_animal;
    delete wrong_cat;
	
    return (0);
}