/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:57:12 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 21:57:33 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor is called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed(){
    std::cout << "Destructor is called" << std::endl;
}

Fixed::Fixed(const Fixed &c) {
    std::cout << "Copy constructor is called" << std::endl;
    *this = c;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits memeber function called" << std::endl;
    this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &c)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &c)
        return (*this);
	this->_value = c.getRawBits();
	return (*this);
}
