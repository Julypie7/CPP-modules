/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:44:36 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/13 13:25:46 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

void	capitilize(std::string& command)
{
	for(size_t i = 0; i < command.length(); ++i)
		command[i] = std::toupper(command[i]);
}

int main()
{
	PhoneBook phonebook;
	Contact contact;
	std::string command;

	while (1)
	{

		std::cout << "\n\t\t Welcome to crappy awesome phonebook !!! \t\t\n" << std::endl;
		std::cout << "\n\t\t Enter one of the commands: ADD, SEARCH or EXIT \t\t\n"<< std::endl;
		if (!std::getline(std::cin, command))
		{
			if (std::cin.eof())
			{
				std::cout << "\t\t End of line detected. Exiting program!\t\t\n" <<std::endl;
				break;		
			}
			break;
		}
		capitilize(command);
		std::cout << command << std::endl;
		if (command == "ADD")
			phonebook.add(contact);
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
		{
			std::cout << "\n\t\tExiting the phonebook! \n" << std::endl;
			break ;
		}
		else
			std::cout << "\n\t\tThe command is inccorrect! \n" << std::endl;
	}
	return (0);
}
