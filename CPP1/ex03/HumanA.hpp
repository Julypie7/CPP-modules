/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 22:23:21 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/05 18:33:04 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string _name;
        Weapon& _weapon;
    public:
        HumanA(std::string default, Weapon& weaponName);
        ~HumanA();
        void attack(void);
        void setWeapon(const Weapon& newWeapon)     
}

#endif