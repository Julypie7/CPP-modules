/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:58:17 by ineimatu          #+#    #+#             */
/*   Updated: 2025/02/25 17:24:18 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _current_size(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

int PhoneBook::add(Contact contact)
{
    contact.fill_contact(contact)
    if (_current_size = 8)
    {
        std::out << "PhoneBook is full. Overwritting oldest contact." << std::endl;
        for(int i = 1; )
            contact[i - 1] = contact[i]
    }
    else
        _contact[_current_size++] = contact;
}

int fillContact()
{
    
}