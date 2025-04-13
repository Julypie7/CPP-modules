/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:41:45 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/13 16:25:31 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
    private:
       void debug(void);        // Prints a debug-level complaint
       void info(void);         // info-level complaint
       void warning(void);      // warning-level complaint
       void error(void);        // error-level complaint
    public:
        Harl();
        ~Harl();
        
        void complain(std::string level);   // take a string (the "level") and call the corresponding complaint function based on the level  
};

#endif