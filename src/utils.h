/*
 * utils.h
 *
 *  Created on: Oct 16, 2020
 *      Author: summer
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

namespace KP{

	const std::string FILENAME = "input.txt";
	struct person{
		std::string name;
	};


	//TODO 5 pts define function
	/**
	 * counts and returns the number of people with the name personname in fvec
	 * @param pvec: a vector that holds person structs
	 *        prsnname: a persons name
	 * @return the number people with the name prsnname
	 */
	int getcount(std::vector<person> &pvec,std::string &prsnname);


	//TODO 5 pts define function
	/**
	 * 	asks the user for a name, reads it in and then returns it
	 * @param none
	 * @return the name the user entered
	 */
	std::string getonename();

	//TODO 10 pts define function
	/**
	 * tries to open file fn, read 1 line from it, and return this line
	 * @param fn  filename where a name should be, file may not be present
	 * @return the contents of the file, or an empty string if file not found
	 */
	std::string readfile(const std::string &fn=FILENAME);

	//TODO 10 pts create a function
	/**
	 * tries to open file fn, write info to it
	 * @param info what to write to the file
	 * @param sfn  filename where a name should be, file may not be present
	 * @return the contents of the file, or an empty string if file not found
	 */
	bool writefile(std::string &info, const std::string &fn=FILENAME);
}

#endif /* UTILS_H_ */
