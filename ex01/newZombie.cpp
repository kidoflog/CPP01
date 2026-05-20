/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:29:51 by kkido             #+#    #+#             */
/*   Updated: 2026/05/20 15:29:26 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(const std::string name){
	Zombie *newZombie;
	if(name.empty())
		newZombie = new Zombie("Anonymous");
	else
		newZombie = new Zombie(name);
	return newZombie;
}
