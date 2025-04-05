/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:41:30 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/05 18:50:15 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string defType) : _type(defType) {}

Weapon::~Weapon() {
    std::cout << "Human " << name << "is destroyed!" << std::endl;
}

std::string Weapon::getType(void);
{
   return (_type);
}

void  setType(std::string newtype);
{
    _type = newtype;
}