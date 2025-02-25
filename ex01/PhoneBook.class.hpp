/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:00:43 by ineimatu          #+#    #+#             */
/*   Updated: 2025/02/25 15:47:26 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include "Contact.hpp"
# define MAX = 8

class PhoneBook 
{
	private:
		Contact contacts[MAX];
		int _current_size;
		int _index;
	public:
		PhoneBook();
		~PhoneBook();
		
		int add(Contact contact);
		int search();
};

#endif
