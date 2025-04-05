/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:38:29 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/05 18:52:18 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string defName) : name(defName) {}

HumanB::~HumanB() {
    std::cout << "Human " << name << "is destroyed!" << std::endl;
}

void attack(void)
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}

void set_weapon(Weapon& newWeapon)
{
    
}