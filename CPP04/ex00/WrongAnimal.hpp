/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:14:58 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/22 15:31:21 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string WrongAnimal);
        WrongAnimal(const WrongAnimal& copy);
        ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &assin);
           
        std::string getType(void) const;
        void makeSound(void) const;
};

#endif