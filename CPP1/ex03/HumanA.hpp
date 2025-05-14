/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 22:23:21 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 19:08:28 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon  &_weapon;
    public:
        HumanA(std::string def, Weapon& weaponName);
        ~HumanA();
        void attack(void);
        void setWeapon(const Weapon& newWeapon);    
};

#endif