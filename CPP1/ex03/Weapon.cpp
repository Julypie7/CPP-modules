/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:41:30 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/13 09:26:58 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string defType) {
    this->_type = defType;
    std::cout << "New weapon of type " << this->_type << "chosen" << std::endl;
}

Weapon::~Weapon() {
    std::cout << "Weapon " << this->_type << "is destroyed!" << std::endl;
}

const std::string &Weapon::getType(void)
{
   return (this->_type);
}

void  Weapon::setType(std::string newtype)
{
    this->_type = newtype;
    std::cout << "New weapon of type " << this->_type << "chosen" << std::endl;
}