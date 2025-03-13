/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:58:17 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/13 13:20:14 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook() : _current_size(0), _index(0) {}

PhoneBook::~PhoneBook() {}


void PhoneBook::add(Contact contact)
{
    contact.fill_contact(contact);
    if (_current_size > MAX)
    {
        std::cout << "PhoneBook is full. Overwritting oldest contact." << std::endl;
        _contacts[_index] = contact;
        _index = (_index + 1) % MAX;
    }
    else
        _contacts[_current_size++] = contact;
    std::cout << "\nContact has been successfully added :)\n" << std::endl;
}

void PhoneBook::search()
{
    std::cout << "Hola" << std::endl;
}