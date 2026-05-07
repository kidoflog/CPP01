/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:22:32 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 01:57:53 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Anonymous"){
}

Zombie::Zombie(const std::string &new_name) : _name(new_name){
}

Zombie::~Zombie(){
	std::cout << _name << " is destroyed..." << std::endl;
}

void Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(const std::string name){
	_name = name;
}
