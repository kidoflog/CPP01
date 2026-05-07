/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:11:12 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 02:00:55 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(const std::string &new_name);
		~Zombie();
		void announce();
		void set_name(const std::string name);
	private:
		std::string _name;
};

Zombie *new_Zombie(const std::string name);
Zombie *zombieHorde(const int N, const std::string name);

#endif
