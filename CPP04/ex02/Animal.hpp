/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:12:05 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/23 10:15:29 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();

        Animal &operator=(const Animal &assin);
            
        std::string getType(void) const;
        
        virtual void makeSound(void) const = 0; //this function is purely abstract and must be overridden in any derived class
};

#endif