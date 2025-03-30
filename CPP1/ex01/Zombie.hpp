/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:21:34 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/30 15:38:16 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie 
{
        private:
                std::string name;
        public:
                Zombie();
                ~Zombie();
                
                void announce(void);
                std::string getName();
                void setName(std::string zombieName);
                
};

Zombie* zombieHorde(int N, std::string name);

#endif