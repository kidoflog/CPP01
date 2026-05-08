/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 11:14:08 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 15:48:13 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str): _type(str.empty()? "none" : str){
}

const std::string& Weapon::getType(){
	return _type;
}

void Weapon::setType(const std::string str){
	if(str.empty())
		_type = "none";
	else
		_type = str;
}
