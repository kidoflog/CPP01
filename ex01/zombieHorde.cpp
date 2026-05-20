/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 01:26:34 by kkido             #+#    #+#             */
/*   Updated: 2026/05/20 16:10:53 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>
#include <cstdlib>

Zombie *zombieHorde(const int N, const std::string name){
	std::string zombie_name = name.empty() ? "Anonymous" : name;
	Zombie *zombie_horde;
	try{
		zombie_horde = new Zombie[N];
	}catch(const std::bad_alloc &e){
		return NULL;
	}
	for(int i = 0; i < N; i++){
		zombie_horde[i].set_name(zombie_name);
	}
	return zombie_horde;
}
