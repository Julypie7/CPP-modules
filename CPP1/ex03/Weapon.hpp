/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 22:18:38 by ineimatu          #+#    #+#             */
/*   Updated: 2025/03/30 22:23:00 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon
{
    private:
            std::string _type;
    public:
        Weapon();
        ~Weapon();
        const std::string getType();
        void  setType(std::string newtype);
}
