/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:19:42 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/14 22:01:12 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <fstream>

class Fixed
{
  private:
        int _value;
        static const int _fractional = 8;
  public:
        Fixed();
        Fixed(const Fixed &c);
		Fixed(const	int num);
		Fixed(const float num);
        Fixed &operator=(const Fixed &c);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream&	operator<<(std::ostream&, const Fixed&);

#endif
