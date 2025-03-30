/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:38:41 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/30 15:33:32 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

std::string	Zombie::getName(void)
{
	return (name);
}

void	Zombie::setName(std::string zombiename)
{
	name = zombiename;
}

void    Zombie::announce() {
    std::cout << getName()  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}