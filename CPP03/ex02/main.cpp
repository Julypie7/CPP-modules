/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:07:33 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/21 12:50:43 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main()
{
	ClapTrap	Father("Father");
	ScavTrap 	Son("Son");
	FlagTrap    Daughter("Daughter");

	Son.printStatus();
	Daughter.printStatus();
	
	Father.attack("bad guy");
	Son.attack("bad guy");
	Daughter.attack("bad_guy");
	Daughter.takeDamage(5);
	Daughter.beRepaired(3);

	Daughter.highFiveGuys();

	Daughter.printStatus();
	return(0);
}

