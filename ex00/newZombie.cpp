/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:29:51 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 01:57:29 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *new_Zombie(const std::string name){
	Zombie *new_zombie;
	if(name.empty())
		new_zombie = new Zombie("Anonymous");
	else
		new_zombie = new Zombie(name);
	return new_zombie;
}
