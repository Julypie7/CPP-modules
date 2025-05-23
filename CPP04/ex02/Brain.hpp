/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 08:20:05 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/23 09:43:06 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
#include <sstream>

class Brain
{
    protected:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain& copy);
        ~Brain();

        Brain &operator=(const Brain &assin);
        std::string	getIdea(int	index) const;
		void		setIdea(std::string str, int index);

};

#endif