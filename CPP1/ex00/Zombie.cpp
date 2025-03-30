/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:38:41 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/30 15:06:26 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

void    Zombie::announce() {
    std::cout << name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}