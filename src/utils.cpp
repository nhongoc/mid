/*
 * utils.cpp
 *
 *  Created on: Oct 16, 2020
 *      Author: summer
 */
#include "utils.h"
using namespace std;

int KP::getcount(vector<person> &pvec,std::string &prsnname) {
	int sameName = 0;
	for (unsigned int i = 0; i < pvec.size(); i++) {
		if (pvec[i].name == prsnname) {
			sameName += 1;
		}
	}
	return sameName;
}

std::string KP::getonename() {
	string name;
	std::cout << "What is the name you would like to give?" << std::endl;
	std::cin >> name;
	return name;
}

std::string KP::readfile(const std::string &fn) {
	fstream myfstream;
	string line;
	myfstream.open(fn.c_str(), ios_base::in);
	if (!myfstream.is_open()) {
		return "";
	}
	getline(myfstream, line);
	myfstream.close();
	return line;
}

bool KP::writefile(std::string &info, const std::string &fn) {
	fstream myfstream;
	myfstream.open(fn.c_str(), ios_base::out);
	if (!myfstream.is_open()) {
		return false;
	}
	myfstream << info << endl;
	myfstream.close();
	return true;
}
