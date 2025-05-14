/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 21:56:50 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 22:07:03 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
  private:
        int _value;
        static const int _fractional = 8;
  public:
        Fixed();
        Fixed(const Fixed &c);
		Fixed(const int integer);
		Fixed(const float floating); 
        Fixed &operator=(const Fixed &c); //assignment operator
        ~Fixed(void);

        bool operator>(const Fixed&) const;
        bool operator<(const Fixed&) const;
        bool operator>=(const Fixed&) const;
        bool operator<=(const Fixed&) const;
        bool operator==(const Fixed&) const;
        bool operator!=(const Fixed&) const;

        Fixed operator+(const Fixed&) const;
        Fixed operator-(const Fixed&) const;
        Fixed operator*(const Fixed&) const;
        Fixed operator/(const Fixed&) const;

        Fixed operator++(void);
        Fixed operator--(void);
        Fixed operator++(int);
        Fixed operator--(int);

		float toFloat(void) const;
		int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        static Fixed& min(Fixed &f1, Fixed &f2);
        static Fixed& max(Fixed &f1, Fixed &f2);
        static const Fixed& min(const Fixed &f1,const Fixed &f2);
        static const Fixed& max(const Fixed &f1,const Fixed &f2);
};

std::ostream&	operator<<(std::ostream&, const Fixed&);

#endif