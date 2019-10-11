#include "CityData.h"
#include <iostream>
#include <stack>
using namespace std;
class AVLNode
{
private:

	CityData * pCityData;	// CityData Pointer
	AVLNode * pLeft;		// AVL Left Pointer
	AVLNode * pRight;		// AVL Right Pointer
	int mBF;				// Balance Factor

public:
	AVLNode();
	~AVLNode();

	CityData * GetCityData();	// Get CityData Pointer
	AVLNode * GetLeft();		// Get AVL Left Pointer
	AVLNode * GetRight();		// Get AVL Right Pointer
	int GetmBF();				// Get Balance Factor

	void SetCityData(CityData * node);	// Set CityData Pointer
	void SetLeft(AVLNode * node);		// Set AVL Left Pointer
	void SetRight(AVLNode * node);		// Set AVL Right Pointer
	void SetmBF(int n);					// Set Balance Factor

};
