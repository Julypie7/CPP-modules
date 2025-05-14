/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:35:10 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 19:36:11 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string defName, Weapon& weaponName) : _weapon(weaponName){
    this->_name = _name;
}

HumanA::~HumanA() {
    std::cout << "Human " << this->_name << " 😵 is destroyed!" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " 🥷 attack with their " << this->_weapon.getType() << std::endl;
}