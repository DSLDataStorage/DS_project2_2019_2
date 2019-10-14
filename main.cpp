#include "Manager.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	Manager manager;
	manager.run("command.txt");
}


/* 								=Comment= 
	1. Print format 
		1-1) Command : INSERT, PRINT_AVL, SEARCH_AVL

			 cout<<"( "<<(locationID)<<", "<<(name)<<", "<<(country)<<" )"<<endl;

		1-2) Command : PRINT_MST

			cout<<"( "<<(City1)<<", "<<(City2)<<" ), "<<(Weight)<<endl;
			cout<<"Total: "<<(total)<<endl;


		1-3) Command : PRINT_GP

			#inlude <iomanip.h>
			cout.setf(ios::left);
			for(//i to N){
				for(//j to N){
					cout<<setw(3)<<(data);
				}
			cout<<endl;
			}

			note) you can change (locationID), (name), (data) ... any variable ,
			but you can't change print format			
*/