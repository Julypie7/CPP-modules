/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:38:29 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/13 12:04:48 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string defName) : _nameB(defName) {
    this->_weapon = NULL;
}

HumanB::~HumanB() {
    std::cout << "Human " << this->_nameB << " 💀 is destroyed!" << std::endl;
}

void HumanB::attack(void)
{
    if (!this->_weapon)
        return ;
    std::cout << this->_nameB << " 👱 attack with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this->_weapon = &newWeapon;
    std::cout << this->_nameB << " 👱 took a weapon!" << std::endl;
}