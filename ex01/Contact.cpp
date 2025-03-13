/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:34:25 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/13 13:18:31 by ineimatu         ###   ########.fr       */
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

    std::cout << "Enter contact's first name: ";
    std::cin >> first_name;
    contact.setFirstName(first_name);
    std::cout << "Enter contact's last name: ";
    std::cin >> last_name;
    contact.setLastName(last_name);
    std::cout << "Enter contact's nickname: ";
    std::cin >> nick_name;
    contact.setNickname(nick_name);
    std::cout << "Enter contact's phone_number: ";
    std::cin >> phone_number;
    contact.setPhoneNumber(phone_number);
    std::cout << "Enter contact's darkest secret: ";
    std::cin >> darkest_secret;
    contact.setDarkestSecret(darkest_secret);
}