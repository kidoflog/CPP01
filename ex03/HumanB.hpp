/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 11:14:03 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 15:50:34 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(const std::string name);
		void setWeapon(Weapon &new_weapon);
		void attack();
	private:
		std::string _name;
		Weapon *_weapon;
};

#endif
