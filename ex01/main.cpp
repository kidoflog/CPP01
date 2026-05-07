/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:55:36 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 02:13:41 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie *horde;
	int num_of_zombies = 5;

	std::cout << "----- New zombie horde Saburo awaked! -----" << std::endl;
	horde = zombieHorde(num_of_zombies, "Saburo");
	for(int i = 0; i < num_of_zombies; i++){
		std::cout << i << ". Zombie announce()" << std::endl;
		horde[i].announce();
	}
	std::cout << "----- Someone deleted Saburo! -----" << std::endl;
	delete[] horde;
}
