/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:38:41 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 18:48:38 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " is destroyed." << std::endl;
}

std::string	Zombie::getName(void)
{
	return (this->name);
}

void	Zombie::setName(std::string zombiename)
{
	this->name = zombiename;
}

void    Zombie::announce() {
    std::cout << getName()  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}