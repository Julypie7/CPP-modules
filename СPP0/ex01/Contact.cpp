/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:34:25 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/14 12:10:11 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void Contact::setFirstName(std::string str)
{
    this->_firstName = str;
}

void Contact::setLastName(std::string str)
{
    this->_lastName = str;
}

void Contact::setNickname(std::string str)
{
    this->_nickName = str;
}

void Contact::setPhoneNumber(std::string str)
{
    this->_phoneNumber = str;
}
		
void Contact::setDarkestSecret(std::string str)
{
    this->_darkestSecret = str;
}

std::string Contact::getFirstName() const
{
    return this->_firstName;
}
		
std::string Contact::getLastName() const
{
    return this->_lastName;
}
		
std::string Contact::getNickname() const
{
    return this->_nickName;
}

std::string Contact::getPhoneNumber() const
{
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->_darkestSecret;
}

void    Contact::fill_contact(Contact& contact)
{
    std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

    while (1){
        std::cout << "Enter contact's first name: ";
        if(!std::getline(std::cin, first_name)){
            if (std::cin.eof())
                {
                    std::cout << "\t\t End of line detected. Exiting program!\t\t\n" <<std::endl;
                    break;		
                }
                break;
        }
        contact.setFirstName(first_name);
        std::cout << "Enter contact's last name: ";
        if(!std::getline(std::cin, last_name)){
            if (std::cin.eof())
                {
                    std::cout << "\t\t End of line detected. Exiting program!\t\t\n" <<std::endl;
                    break;		
                }
                break;
        }
        contact.setLastName(last_name);
        std::cout << "Enter contact's nickname: ";
        if(!std::getline(std::cin, nick_name)){
            if (std::cin.eof())
                {
                    std::cout << "\t\t End of line detected. Exiting program!\t\t\n" <<std::endl;
                    break;		
                }
                break;
        }
        contact.setNickname(nick_name);
        std::cout << "Enter contact's phone_number: ";
        if(!std::getline(std::cin, phone_number)){
            if (std::cin.eof())
                {
                    std::cout << "\t\t End of line detected. Exiting program!\t\t\n" <<std::endl;
                    break;		
                }
                break;
        }
        contact.setPhoneNumber(phone_number);
        std::cout << "Enter contact's darkest secret: ";
        if(!std::getline(std::cin, darkest_secret)){
            if (std::cin.eof())
                {
                    std::cout << "\t\t End of line detected. Exiting program!\t\t\n" <<std::endl;
                    break;		
                }
                break;
        }
        contact.setDarkestSecret(darkest_secret);
        std::cout << "\nContact has been successfully added :)\n" << std::endl;
        break;
    }
}