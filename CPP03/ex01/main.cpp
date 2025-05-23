/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:07:33 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/21 12:11:37 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	Father("Father");
	ScavTrap 	Son("Son");

	Son.printStatus();

	Father.attack("bad guy");
	Son.attack("bad guy");
	Son.takeDamage(5);
	Son.beRepaired(3);

	Son.guardGate();

	Son.printStatus();
	return(0);
}

