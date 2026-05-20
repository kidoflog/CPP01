/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 11:13:41 by kkido             #+#    #+#             */
/*   Updated: 2026/05/20 16:19:56 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "iostream"

HumanA::HumanA(const std::string &name,Weapon &new_weapon)
:_name(name.empty() ? "Anonymous" : name), _weapon(new_weapon)
{
}

void HumanA::attack(){
	std::cout << _name << " attacks with their " <<_weapon.getType() << std::endl;
}
