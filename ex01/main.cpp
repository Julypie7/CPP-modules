/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:44:36 by ineimatu          #+#    #+#             */
/*   Updated: 2025/01/08 17:00:56 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main()
{
	int i = 0;
	PhoneBook phonebook;

	std::string command;
	std::cout << "Enter one of the commands: ADD, SEARCH or EXIT "<< std::endl;
	std::cin >> command;
	while (i == 0)
	{
		i = 1;
		if (command == "ADD")
		{
			if (phonebook.add() == 0)
				i == 0;
		}
		if else (command == "SEARCH")
		{
			if (phonebook.search() == 0)
				i == 0;
		}
		if else (command == "EXIT")
		{
			std::cout << "Exiting the phonebook! " << std::endl;
			break ;
		}
		else
		{
			std::cout << "The command is inccorrect! " << endl;
			i == 0;
		}
	}
	return (0);
}
