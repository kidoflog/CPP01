/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:55:36 by kkido             #+#    #+#             */
/*   Updated: 2026/05/20 16:12:14 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

int main(void){
	Zombie *horde;
	int num_of_zombies = 5;

	std::cout << "----- New zombie horde Saburo awaked! -----" << std::endl;
	horde = zombieHorde(num_of_zombies, "Saburo");
	if(!horde){
		std::cerr << "Error: new failed." << std::endl;
		return 1;
	}
	for(int i = 0; i < num_of_zombies; i++){
		std::cout << i << ". Zombie announce()" << std::endl;
		horde[i].announce();
	}
	std::cout << "----- Someone deleted Saburo! -----" << std::endl;
	delete[] horde;
}
