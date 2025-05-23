/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 20:00:52 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/21 12:17:05 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor is called!" << std::endl;
    this->setName("Name");
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
    std::cout << "Copy ScavTrap constructor is called!" << std::endl;
    *this = copy;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "String constructor of ScavTrap is called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor is called!" << std::endl;
}

void   ScavTrap::attack(const std::string &target){
    if (_hitPoints != 0 && _energyPoints != 0){
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else if (_hitPoints <= 0)
        std::cout << "ScavTrap " << _name << " cannot attacks, it doesnt have enough hit points!" << std::endl;
    else
        std::cout << "ScavTrap " << _name << " cannot attacks, it doesnt have enough energy points!" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " in the Gate keeper mode!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav)
{
	std::cout << " ScavTrap assignment operator is called" << std::endl;
	if (this != &scav)
	{
		_name = scav._name;
	    _hitPoints = scav._hitPoints;
	    _energyPoints = scav._energyPoints;
	    _attackDamage = scav._attackDamage;
    }
	return *this;
}


