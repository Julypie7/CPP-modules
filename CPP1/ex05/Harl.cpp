/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineimatu <ineimatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:42:03 by ineimatu          #+#    #+#             */
/*   Updated: 2025/04/13 16:40:07 by ineimatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
    void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4)
    {
        if (level == levels[i])
            (this->*functions[i])();
        i++;
    }
}