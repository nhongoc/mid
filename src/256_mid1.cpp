#include <string>
#include <vector>
#include <iostream>
#include "utils.h"
using namespace std;

//TODO please submit files (util.h, util.cpp) to scholar with all content noted by TODO's below

//TODO 20 pts please move everything in the KP namespace into utils.h and utils.cpp
//            be sure everything remains in namespace KP

namespace KP{
	struct person{
		std::string name;
	};

	//TODO 10 pts define function
	/**
	 * add a person struct (each with name param set to personname) to fvec
	 * @param fvec: a vector that holds person structs
	 *        personname: a persons name
	 * @return void
	 */
	void addperson(std::vector<person> &fvec,std::string &personname);

	//TODO 10 pts define function
	/**
	 * counts and returns the number of people with the name personname in fvec
	 * @param fvec: a vector that holds fruit structs
	 *        personname: a persons name
	 * @return the number people with the name personname
	 */
	int getcount(std::vector<person> &fvec,std::string &personname);


	//TODO 10 pts define function
	/**
	 * 	asks the user for a name, reads it in and then returns it
	 * @param none
	 * @return the name the user entered
	 */
	std::string getonename();
}

//NOTE please do not modify anything in main
int main(){
    //holds person structs
    vector<KP::person> fvec;

    //adds some people
    string name1 = "cosmo";
    KP::addperson(fvec,name1);
    KP::addperson(fvec,name1);
    KP::addperson(fvec,name1);

    //add different people
    string name2=KP::getonename();
    KP::addperson(fvec,name2);
    KP::addperson(fvec,name2);

    //output inventory
    cout<<"We have "<<getcount(fvec,name2)<< " "<<name2<<"'s and "<<fvec.size()<<" entries in fvec"<<endl;
}
