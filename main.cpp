#include "Manager.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	Manager manager;
	manager.run("command.txt");
}

/* comment */
/*
	1. Print format 
	Command : INSERT, PRINT_AVL, SEARCH_AVL, PRINT_GP

	cout<<"( "<<(locationID)<<", "<<(name)<<", "<<(country)<<endl;

	Command : PRINT_MST

	cout<<"( "<<(City1)<<", "<<(City2)<<"), "<<(Weight)<<endl;
	cout<<"Total: "<<(total)<<endl;

	note) you can change (locationID), (name), ... any variable ,
		but you can't change print format

*/