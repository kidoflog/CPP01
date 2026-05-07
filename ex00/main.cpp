/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:55:36 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 01:24:20 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	std::cout << "----- New zombie Taro awaked in heap memory! -----" << std::endl;
	Zombie *taro = new_Zombie("Taro");
	taro->announce();
	std::cout << "----- New zombie Jiro awaked in stack memory! -----" << std::endl;
	randomChump("Jiro");
	std::cout << "----- Someone deleted Taro! -----" << std::endl;
	delete taro;
}
