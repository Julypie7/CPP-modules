/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:33:42 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/20 19:47:01 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Julia("Julia");
    ClapTrap CPP("CPP");
    
    Julia.printStatus();
    CPP.printStatus();
    Julia.attack("CPP");
    CPP.takeDamage(1);
    CPP.attack("Julia");
    Julia.takeDamage(1);
    Julia.attack("CPP");
    CPP.takeDamage(1); 
    Julia.attack("CPP");
    CPP.takeDamage(1);
    Julia.beRepaired(1);
    Julia.printStatus();
    CPP.printStatus();

    ClapTrap test(Julia);

    test.setName("test");
    test.printStatus();
    Julia.attack("whatever");
    Julia.printStatus();
    test.printStatus();
    return (0);
}