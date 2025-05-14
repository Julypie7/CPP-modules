/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:19:52 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 21:44:08 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

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

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = num << this->_fractional;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(num * (1 << this->_fractional));
}

float	Fixed::toFloat(void) const
{
	return this->_value / ((float) (1 << this->_fractional));
}

int	Fixed::toInt(void) const
{
	return this->_value >> this->_fractional;
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

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return stream;
}
