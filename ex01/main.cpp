/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:44:36 by ineimatu          #+#    #+#             */
/*   Updated: 2025/02/25 15:45:35 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int main()
{
	PhoneBook phonebook;
	Contact contact;

	phonebook::PhoneBook() 
	{
    	current_size = 0;  
	}
	while (1)
	{
		std::string command;
		std::cout << "Enter one of the commands: ADD, SEARCH or EXIT "<< std::endl;
		std::cin >> command;
		if (command == "ADD")
			phonebook.add(contact);
		if else (command == "SEARCH")
			phonebook.search();
		if else (command == "EXIT")
		{
			std::cout << "Exiting the phonebook! " << std::endl;
			break ;
		}
		else
			std::cout << "The command is inccorrect! " << endl;
	}
	return (0);
}
