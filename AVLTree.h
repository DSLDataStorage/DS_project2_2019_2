#include "AVLNode.h"
#include <iostream>
#include <fstream>// header file declare
using namespace std;
class AVLTree
{
public:
	AVLNode * root;	// AVLTree Root
	ofstream * flog;

public:
	AVLTree(ofstream * flog);
	~AVLTree();

	AVLNode  *  Getroot();
	void	 	Setroot(AVLNode * node);
	bool		Insert(CityData * node);
	CityData *	Delete(int num);
	CityData *	Search(int num);
	bool		Print();

};

