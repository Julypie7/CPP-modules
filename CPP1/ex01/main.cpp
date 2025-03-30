/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:46:26 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/30 15:38:42 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
   
    Zombie *heapZombie;
    int N = 5;
    
    std::cout << "\nCreating a horde of Zombies : " << std::endl;
    heapZombie = zombieHorde(N, "HeapZombie");
    if (!heapZombie)
	{
		std::cerr << "error creating horde" << std::endl;
		return (1);
	}
    for (int i = 0; i < N; i++)
        heapZombie[i].announce();
    std::cout << "\nDeleting the horde of Zombie :" << std::endl;
    delete[] heapZombie;
    return (0);
}