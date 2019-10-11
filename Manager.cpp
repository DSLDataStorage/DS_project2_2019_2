#include "Manager.h"
#include <stdlib.h>
#include <fstream>
using namespace std;

Manager::Manager()
{
	flog.open("log.txt", ios::app);
	flog.setf(ios::fixed);

	avl = new AVLTree(&flog);
	gp = new Graph(&flog);
	iter = 0;
	cmd = NULL;
}

Manager::~Manager()
{
	flog.close();
}

void Manager::run(const char * command)
{
	fin.open(command);

	cmd = new char[40];


	while (!fin.eof())
	{
		iter = iter + 1;
		fin.getline(cmd, 40);
		char * one = strtok(cmd, " ");

		if (!strcmp(one, "LOAD")) {
			//call function()
			//example. ( you have to change )
			if (LOAD()) printSuccessCode("LOAD");
			else printErrorCode(100, "LOAD");
		}
		else if (!strcmp(one, "INSERT")) {
			//call function()
		}
		else if (!strcmp(one, "MOVE")) {
			//call function()
		}
		else if (!strcmp(one, "SAVE")) {
			//call function()
		}
		else if (!strcmp(one, "SEARCH")) {
			//call function()
		}
		else if (!strcmp(one, "PRINT")) {
			//call function()
		}
		else if (!strcmp(one, "COMPLETE")) {
			//call function()
		}
		else if (!strcmp(one, "EXIT")) {
			//call function()
			EXIT();	
		}
		else {
			printErrorCode(0,"Unknown");
		}
	}
	fin.close();
	return;
}

bool Manager::LOAD()
{
	return true;
}

bool Manager::INSERT()
{
	return true;
}

bool Manager::PRINT_AVL()
{
	return true;
}

bool Manager::SEARCH_AVL()
{
	return true;
}

bool Manager::DELETE_AVL()
{
	return true;
}

bool Manager::BUILD_GP()
{
	return true;
}

bool Manager::PRINT_GP()
{
	return true;
}

bool Manager::BUILD_MST()
{
	return true;
}

bool Manager::PRINT_MST()
{
	return true;
}

void Manager::EXIT()
{
	exit(1);
}

void Manager::printErrorCode(int n, const char * cmdname) {//ERROR CODE PRINNT FUNCTION
	flog << "==> command " << iter << ") " << cmdname << endl;
	flog << "Error code: " << n << endl;
}

void Manager::printSuccessCode(const char * cmdname) {//SUCCESS CODE PRINNT FUNCTION
	flog << "==> command " << iter << ") " << cmdname << endl;
	flog << "Success" << endl;
}