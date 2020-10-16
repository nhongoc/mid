#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "utils.h"
using namespace std;

//TODO please submit files (util.h, util.cpp) to scholar with all content noted by TODO's below

//TODO 20 pts please move everything in the KP namespace into utils.h and utils.cpp
//            be sure everything remains in namespace KP

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
	int getcount(vector<person> &pvec,std::string &prsnname);


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

//NOTE please do not modify anything in main
int main(){
    //holds person structs
    vector<KP::person> fvec;

	//try to read a file, if file not there then
	//get a name from the user and write it to the file
    string name1 = KP::readfile(KP::FILENAME);
    if (name1.empty()){
    	name1= KP::getonename();
    	KP::writefile(name1, KP::FILENAME);
    }

    KP::person p1;
    p1.name=name1;

    //adds some people
    fvec.push_back(p1);
    fvec.push_back(p1);
    fvec.push_back(p1);

    //add different people
    string name2=KP::getonename();
    p1.name=name2;

    fvec.push_back(p1);
    fvec.push_back(p1);

    //output inventory
    cout<<"We have "<<getcount(fvec,name2)<< " "<<name2<<"'s and "<<fvec.size()<<" entries in fvec"<<endl;
}

