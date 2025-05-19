/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:57:12 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/17 18:33:23 by ineimatu         ###   ########.fr       */
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

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return(f1);
    return(f2);
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    return(f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return(f1);
    return(f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    return(f2);
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

bool Fixed::operator>(const Fixed &var) const
{
    if (this->_value > var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<(const Fixed &var) const
{
    if (this->_value < var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(const Fixed &var) const
{
    if (this->_value > var.getRawBits() || this->_value == var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(const Fixed &var) const
{
    if (this->_value < var.getRawBits() || this->_value == var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(const Fixed &var) const
{
    if (this->_value == var.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!=(const Fixed &var) const
{
    if (this->_value != var.getRawBits())
        return (true);
    return (false);
}

Fixed Fixed::operator+(const Fixed &var) const
{
    Fixed tmp;
    tmp._value = this->_value + var._value;
    return(tmp);
}

Fixed Fixed::operator-(const Fixed &var) const
{
    Fixed tmp;
    tmp._value = this->_value - var._value;
    return(tmp);
}

Fixed Fixed::operator*(const Fixed &var) const
{
    Fixed tmp;
    float tmpFloat;
    tmpFloat = this->toFloat() * var.toFloat();
    tmp._value = roundf(tmpFloat * (1 << this->_fractional));
    return(tmp);
}

Fixed Fixed::operator/(const Fixed &var) const
{
    Fixed tmp;
    float tmpFloat;
    tmpFloat = this->toFloat() / var.toFloat();
    tmp._value = roundf(tmpFloat * (1 << this->_fractional));
    return(tmp);
}

Fixed	Fixed::operator++(void)
{
	Fixed	tmp;

	tmp._value = ++_value;
	return (tmp);
}

Fixed	Fixed::operator--(void)
{
	Fixed	tmp;

	tmp._value = --_value;
	return (tmp);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp._value = _value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp._value = _value--;
	return (tmp);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return stream;
}
