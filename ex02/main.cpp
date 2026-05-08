/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:55:36 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 11:02:43 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main (){
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;
	std::cout << "str adress: " << &str << std::endl;
	std::cout << "ptr adress: " << ptr << std::endl;
	std::cout << "ref adress: " << &ref << std::endl;
	std::cout << "str value: " << str << std::endl;
	std::cout << "ptr value: " << *ptr << std::endl;
	std::cout << "ref value: " << ref << std::endl;
}
