/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 11:13:50 by kkido             #+#    #+#             */
/*   Updated: 2026/05/20 16:19:55 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	public:
		HumanA(const std::string &name, Weapon &new_weapon);
		void attack();
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif
