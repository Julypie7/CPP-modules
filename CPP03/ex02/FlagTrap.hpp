/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:25:31 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/21 12:50:04 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap();
        FlagTrap(std::string flag);
        FlagTrap(const FlagTrap& copy);
        ~FlagTrap();

        FlagTrap &operator=(const FlagTrap &assin);
            
        void attack(const std::string &target);
        void highFiveGuys(void);
};

#endif