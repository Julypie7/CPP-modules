/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:07:06 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/23 10:01:57 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main(void)
{
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    delete dog;
    delete cat;
    std::cout << std::endl;
    
    std::cout << "Array test" <<std::endl;
    std::cout << std::endl;

    const int size = 10;
    Animal *animals[size];
    
    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    std::cout << std::endl;
    for (int i = size /2 ; i < size; i++)
        animals[i] = new Cat();
    
    std::cout << std::endl;
    std::cout << "this is dog" << std::endl;
    animals[0]->makeSound();
    std::cout << "this is cat" << std::endl;
    animals[7]->makeSound();
    std::cout << std::endl;

    static_cast<Dog*>(animals[0])->getBrain()->setIdea("wow!", -55);
    static_cast<Dog*>(animals[0])->getBrain()->setIdea("wow!", 105);
    static_cast<Dog*>(animals[0])->getBrain()->setIdea("wow!", 0);
    std::cout << "Dog: " << static_cast<Dog*>(animals[0])->getBrain()->getIdea(0) <<std::endl;
    std::cout << "Cat " << static_cast<Dog*>(animals[7])->getBrain()->getIdea(0) <<std::endl;

    std::cout << std::endl;

    std::cout << "DELETING animals" <<std::endl;
    for (int i = 0; i < size; i++)
			delete animals[i];
	
    return (0);
}