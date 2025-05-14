/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 14:46:26 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 19:33:03 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    std::cout << "Creating a stack zombie (randomChamp): " << std::endl;
    randomChump("StackZombie");
    
    std::cout << "\nCreating a heap zombie (newZombie): " << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    std::cout << "\nDeleting the heap Zombie :" << std::endl;
    delete heapZombie;

    return 0;
}