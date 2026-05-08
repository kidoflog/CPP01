/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkido <kkido@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:55:36 by kkido             #+#    #+#             */
/*   Updated: 2026/05/08 22:19:18 by kkido            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]){

	if(argc!=4){
		std::cout << "Usage: ./ex04 <filename> <s1> <s2>" << std::endl;
		return 0;
	}
	std::string line;
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	int pos = 0;
	std::ifstream ifs(filename);
	if(!ifs){
		std::cout << "Error: Failed to open file." << std::endl;
		return 1;
	}
	std::ofstream ofs(filename + ".replace");
	if(!ofs){
		std::cout << "Error: Failed to open replace file." << std::endl;
		return 1;
	}
	while(std::getline(ifs,line)){
		while(((pos = line.find(s1,pos)) != (int)std::string::npos)&&!s1.empty()){
			line.erase(pos,s1.length());
			line.insert(pos,s2);
		}
		ofs << line;
		if(ifs.eof())
		ofs << std::endl;
	}
}
