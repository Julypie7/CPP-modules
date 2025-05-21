/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:55:46 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/20 20:00:29 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
            ScavTrap();
            ScavTrap(std::string scav);
            ScavTrap(const ScavTrap& copy);
            ~ScavTrap();

            ScavTrap &operator=(const ScavTrap &assin);
            
            void attack(const std::string &target);
            void guarGate();
};

#endif