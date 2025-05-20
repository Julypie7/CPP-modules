/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 20:23:19 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/20 08:17:07 by ineimatu         ###   ########.fr       */
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

void    ClapTrap::setName(std::string name){
    _name = name;
}

void   ClapTrap::attack(const std::string &target){
    if (_hitPoints != 0 && _energyPoints != 0){
        std::cout << "ClapTrap " << _name << " attacks" << target << ", causing" << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else if (_hitPoints <= 0)
        std::cout << "ClapTrap " << _name << " cannot attacks, it doesnt have enough hit points!" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " cannot attacks, it doesnt have enough energy points!" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int ammount){
    if (_hitPoints > 0 && _energyPoints != 0){
        std::cout << "ClapTrap " << _name << " was attacked, loosing" << ammount << " hit points!" << std::endl;
        _hitPoints -= ammount;
        if (_hitPoints < 0)
            _hitPoints = 0;
    }
    else
        std::cout << "ClapTrap " << _name << " was attacked, but cannot take any more damage!" << std::endl;
}

