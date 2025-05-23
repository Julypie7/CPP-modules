/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:23:19 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/21 12:12:50 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "Default constructor is called!" << std::endl;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "Copy costructor is called!" << std::endl;
    *this=copy;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "String constructor is called!" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor is called!" << std::endl;
}


void   ClapTrap::attack(const std::string &target){
    if (_hitPoints != 0 && _energyPoints != 0){
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else if (_hitPoints <= 0)
        std::cout << "ClapTrap " << _name << " cannot attacks, it doesnt have enough hit points!" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " cannot attacks, it doesnt have enough energy points!" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int ammount){
    if (_hitPoints > 0 && _energyPoints != 0){
        std::cout << "ClapTrap " << _name << " was attacked, loosing " << ammount << " hit points!" << std::endl;
        _hitPoints -= ammount;
        if (_hitPoints < 0)
            _hitPoints = 0;
    }
    else
        std::cout << "ClapTrap " << _name << " was attacked, but cannot take any more damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_hitPoints <= 0)
    {
       std::cout << "ClapTrap " << _name << " cannot repair itself, it doesn't ahve enough hit points" << std::endl;
       return; 
    }
    if (_energyPoints <= 0){
        std::cout << "ClapTrap " << _name << " cannot repair itself, it doesn't ahve enough energy points" << std::endl;
       return; 
    }
    std::cout << "ClapTrap " << _name << " repaired " << amount << " hit points" << std::endl;
    _hitPoints += amount;
    _energyPoints--;
}

void ClapTrap::printStatus(){
    std::cout << "ClapTrap " << _name << " has: hit points = " << _hitPoints << ", attack damage = " << _attackDamage << ", energy points = " << _energyPoints << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap copy assignment operator is called" << std::endl;
    if (this != &claptrap)
    {
	    _name = claptrap._name;
	    _hitPoints = claptrap._hitPoints;
	    _energyPoints = claptrap._energyPoints;
	    _attackDamage = claptrap._attackDamage;
    }
	return *this;
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	_energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}
