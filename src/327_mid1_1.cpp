#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "utils.h"
using namespace std;

//TODO please submit files (util.h, util.cpp) to scholar with all content noted by TODO's below

//TODO 20 pts please move everything in the KP namespace into utils.h and utils.cpp
//            be sure everything remains in namespace KP

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

