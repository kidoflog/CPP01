/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:55:36 by kkido             #+#    #+#             */
/*   Updated: 2026/05/20 16:40:56 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <new>

int main(int argc, char *argv[]){

	if(argc!=4){
		std::cout << "Usage: ./ex04 <filename> <s1> <s2>" << std::endl;
		return 0;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	size_t pos;

	std::ifstream ifs(filename.c_str());
	if(!ifs){
		std::cerr << "Error: Failed to open file." << std::endl;
		return 1;
	}

	std::ofstream ofs((filename + ".replace").c_str());
	if(!ofs){
		std::cerr << "Error: Failed to open replace file." << std::endl;
		return 1;
	}
	std::ostringstream buffer;
	try{
		buffer << ifs.rdbuf();
	}catch(std::bad_alloc &e){
		std::cerr << "Error: Memory allocate failed." << std::endl;
		return 1;
	}
	std::string content = buffer.str();
	pos = 0;
	if(s1.empty()){
		ofs << content;
		return 0;
	}
	while((pos = content.find(s1,pos)) != std::string::npos){
		content.erase(pos,s1.length());
		content.insert(pos,s2);
		pos = pos + s2.length();
	}
	ofs << content;
}
