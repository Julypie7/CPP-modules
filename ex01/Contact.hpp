/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:54:17 by ineimatu          #+#    #+#             */
/*   Updated: 2025/02/24 14:26:16 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		Contact();
		void setFirstName(std::string &FirstName);
		void setLastName(std::string &LastName);
		void setNickname(std::string &Nickname);
		void setPhoneNumber(std::string &PhoneNumber);
		void setDarkestSecret(std::string &DarkestSecret);
};

#endif