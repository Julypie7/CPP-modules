/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:21:34 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/30 14:58:34 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
            std::string name;
    public:
            Zombie(std::string zombieName);
            ~Zombie();
            
            void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif