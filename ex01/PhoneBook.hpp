/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:00:43 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/13 13:08:13 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.hpp"
#include <iomanip> //setw(10)
#include <string>
#include <iostream>
#include <sstream>     //std::stringstream
#include <cstdlib> 

#define MAX 8

class PhoneBook 
{
	private:
		Contact _contacts[MAX];
		int _current_size;
		int _index;
		
	public:
		PhoneBook();
		~PhoneBook();
		
		void add(Contact contact);
		void search();
};

#endif
