/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:58:17 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/26 13:28:01 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook() : _current_size(0), _index(0) {}

PhoneBook::~PhoneBook() {}


void    PhoneBook::add(Contact contact)
{
    contact.fill_contact(contact);
    if (_current_size >= MAX)
    {
        std::cout << "PhoneBook is full. Overwritting oldest contact." << std::endl;
        _contacts[_index] = contact;
        _index = (_index + 1) % MAX;
    }
    else
        _contacts[_current_size++] = contact;
}

void    printContact(Contact C)
{
    if (C.getFirstName().size() >= 10)
        std::cout << std::setw(10) << std::right << C.getFirstName().substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::right << C.getFirstName() << "|";
    if (C.getLastName().size() >= 10)
        std::cout << std::setw(10) << std::right << C.getLastName().substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::right << C.getLastName() << "|";
    if (C.getNickname().size() >= 10)
        std::cout << std::setw(10) << std::right << C.getNickname().substr(0, 9) << "." << std::endl;
    else
        std::cout << std::setw(10) << std::right << C.getNickname() << std::endl;;
}

void    displayContact(Contact C)
{
    std::cout << std::right << "First name: ";
    std::cout << std::right << C.getFirstName() << std::endl;
    std::cout << std::right << "Last name: ";
    std::cout << std::right << C.getLastName() << std::endl;
    std::cout << std::right << "Nickname: ";
    std::cout << std::right << C.getNickname() << std::endl;
    std::cout << std::right << "Phone number: ";
    std::cout << std::right << C.getPhoneNumber() << std::endl;
    std::cout << std::right << "Darkest Secret: ";
    std::cout << std::right << C.getDarkestSecret() << std::endl;
}

void    PhoneBook::search()
{
    std::string command;
    int index;
    
    std::cout << std::setw(10) << std::right << "Index" << "|" << std::setw(10) << std::right << "First Name" << "|" <<std::setw(10) << std::right << "Last Name" << "|" << std::setw(10) << std::right << "Nickname"  << std::endl;
    std::cout << std::setw(10) << std::right << "  ---------------------------------------------" << std::endl;
    for (int i = 0; i < _current_size; i++){
        std::cout << std::setw(10) << std::right << i + 1 << "|";
        printContact(_contacts[i]);
    }
    std::cout << std::endl;
    
    while (1){
        std::cout << "\t\t Enter index of the contact for more information \t\t" << std::endl;
        if (!std::getline(std::cin, command))
	    {
        	if (std::cin.eof())
	    	{
	    		std::cout << "\t\t End of line detected. Exiting program!\t\t\n" <<std::endl;
	    		break;		
	    	}
	    	break;
	    }
        else if (command.size() == 1 && command[0] >= '1' && command[0] <= '8')
        {
			std::istringstream(command) >> index;
	        if (index > _current_size)
                std::cout << "\t\t There is no contact with this index" << std::endl;
            else
                displayContact(_contacts[index - 1]);
         break;
        }
        else
            std::cout << "\t\tPlease, enter valid index number\n" << std::endl;
    }
    
}
