/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 11:13:52 by kkido             #+#    #+#             */
/*   Updated: 2026/05/20 16:19:57 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "iostream"

HumanB::HumanB(const std::string &name): _name(name.empty() ? "Anonymous" : name), _weapon(NULL){
}

void HumanB::setWeapon(Weapon &new_weapon){
	_weapon = &new_weapon;
}


void HumanB::attack(){
	if(!_weapon)
		std::cout << _name << " attacks with their NULL" << std::endl;
	else
		std::cout << _name << " attacks with their " <<_weapon->getType() << std::endl;
}
