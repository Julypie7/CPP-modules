/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 08:26:03 by ineimatu          #+#    #+#             */
/*   Updated: 2025/05/23 09:46:01 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << " Default constructor for Brain is called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = "new idea";
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Copy constructor for Brain is called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &assign)
{
    if (this != &assign)
    {
        for (int i = 0; i < 100; i++)
            this->setIdea(assign.getIdea(i), i);
    }
    return (*this);
}

Brain::~Brain(){
	std::cout << "Default destructor for Brain is called" << std::endl;
}

std::string Brain::getIdea(int i) const
{
    if (i < 0 || i > 99){
        std::cout << "Index is either too big or too small for idea array" << std::endl;
        return (NULL);
    }
    return(_ideas[i]);
}

void Brain::setIdea(const std::string idea, int index)
{
    if (index < 0 || index > 99){
        std::cout << "Index is either too big or too small for idea array" << std::endl;
        return ;
    }
    _ideas[index] = idea;
}