/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:09:19 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/07 20:15:40 by ineimatu         ###   ########.fr       */
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
        Fixed(void);
        Fixed(const Fixed &c);
		Fixed(const int integer);
		Fixed(const float floating);
        Fixed &operator=(const Fixed &c);
        ~Fixed(void);

		float toFloat(void) const;
		int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif

