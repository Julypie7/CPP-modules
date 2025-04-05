/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:35:10 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/05 18:41:00 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string defName, Weapon& weaponName) : name(defName),  weapon(weaponName){}

HumanA::~HumanA() {
    std::cout << "Human " << name << "is destroyed!" << std::endl;
}

void attack(void)
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}