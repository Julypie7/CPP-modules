/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 22:30:08 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/05 18:51:52 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string _nameB;
        Weapon* _weapon;
    public:
        HumanB(std::string default);
        ~HumanB();
        void set_weapon(Weapon& newWeapon)
        void attack(void);       
}

#endif