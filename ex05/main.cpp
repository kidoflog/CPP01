/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:55:36 by kkido             #+#    #+#             */
/*   Updated: 2026/05/10 18:13:17 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(){
	Harl harl;
	std::cout << "--- debug command test ---" << std::endl;
	harl.complain("DEBUG");
	std::cout << "--- info command test ---" << std::endl;
	harl.complain("INFO");
	std::cout << "--- warning command test ---" << std::endl;
	harl.complain("WARNING");
	std::cout << "--- error command test ---" << std::endl;
	harl.complain("ERROR");
	std::cout << "--- not exist command test ---" << std::endl;
	harl.complain("TEST");
}
