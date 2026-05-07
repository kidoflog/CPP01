/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 01:26:34 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 02:06:46 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(const int N, const std::string name){
	if(N <= 0)
		return NULL;
	std::string zombie_name = name.empty() ? "Anonymous" : name;
	Zombie *zombie_horde = new Zombie[N];
	for(int i = 0; i < N; i++){
		zombie_horde[i].set_name(zombie_name);
	}
	return zombie_horde;
}
