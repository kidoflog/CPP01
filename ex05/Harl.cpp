/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 17:38:38 by kkido             #+#    #+#             */
/*   Updated: 2026/05/10 18:10:15 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void(Harl::*HARL_FUNC)(void);

void Harl::complain(std::string level){
	std::string levels[] = {"DEBUG","INFO","WARNING","ERROR"};
	HARL_FUNC harl_func[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i=0; i<4 ;i++){
		if(levels[i] == level){
			(this->*harl_func[i])();
			return;
		}
	}
	std::cout << "Error: command not found." << std::endl;
}

void Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}
