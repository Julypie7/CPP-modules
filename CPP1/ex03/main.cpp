/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:35:32 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/13 12:07:26 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club 🔫 ");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club 🗡️");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club 🔫 ");
        
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club 🗡️");
        jim.attack();
    }
}