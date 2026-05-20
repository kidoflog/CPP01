/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:55:36 by kkido             #+#    #+#             */
/*   Updated: 2026/05/20 15:56:13 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

int main(void){
	Zombie *taro;

	std::cout << "----- New zombie Taro awaked in heap memory! -----" << std::endl;
	try{
	taro = newZombie("Taro");
	} catch(const std::bad_alloc &e){
		std::cerr << "Error: new failed." << std::endl;
		return 1;
	}
	taro->announce();
	std::cout << "----- New zombie Jiro awaked in stack memory! -----" << std::endl;
	randomChump("Jiro");
	std::cout << "----- Someone deleted Taro! -----" << std::endl;
	delete taro;
}
