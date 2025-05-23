/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:28:51 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/21 12:48:56 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap()
{
    std::cout << "FlagTrap default constructor is called!" << std::endl;
    this->setName("FlagName");
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FlagTrap::FlagTrap(const FlagTrap &copy): ClapTrap(copy)
{
    std::cout << "Copy FlagTrap constructor is called!" << std::endl;
    *this = copy;
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
    std::cout << "String constructor of FlagTrap is called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FlagTrap::~FlagTrap(){
	std::cout << "FlagTrap destructor is called!" << std::endl;
}

void   FlagTrap::attack(const std::string &target){
    if (_hitPoints != 0 && _energyPoints != 0){
        std::cout << "FlagTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else if (_hitPoints <= 0)
        std::cout << "FlagTrap " << _name << " cannot attacks, it doesnt have enough hit points!" << std::endl;
    else
        std::cout << "FlagTrap " << _name << " cannot attacks, it doesnt have enough energy points!" << std::endl;
}

void FlagTrap::highFiveGuys(){
	std::cout << "FlagTrap " << _name << " is giving you high-five! You are awesome" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &flag)
{
	std::cout << " FlagTrap assignment operator is called" << std::endl;
	if (this != &flag)
	{
		_name = flag._name;
	    _hitPoints = flag._hitPoints;
	    _energyPoints = flag._energyPoints;
	    _attackDamage = flag._attackDamage;
    }
	return *this;
}
