/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 15:08:32 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/30 15:35:17 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *horde;
    
    horde = new Zombie[N];
    if (!horde)
        return (NULL);
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    return (horde);
}