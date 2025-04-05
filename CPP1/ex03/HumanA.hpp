/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 22:23:21 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/05 11:45:31 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class HumanA{
    private:
        std::string _name;
        Weapon w.type;
    public:
        HumanA(std::string humanAname, Weapon weap.type);
        ~HumanA();
        attack();
        
}