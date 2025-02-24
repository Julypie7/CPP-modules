/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:58:17 by ineimatu          #+#    #+#             */
/*   Updated: 2025/02/24 14:12:05 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "PhoneBook.hpp"

int PhoneBook::add()
{
    sid::cout << "Enter new contact details: " << std::endl;
    if (current_size = 8)
    {
        std::out << "PhoneBook is full. Overwritting oldest contact." << std::endl;
        contacts[0].fillContact();
    }
    else
    {
        contacts[current_size].fillContact();
        current_size++;
    }
}

int fillContact()
{
    
}