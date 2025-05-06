/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:19:42 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/26 20:55:33 by ineimatu         ###   ########.fr       */
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
        Fixed &operator=(const Fixed &c);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif