#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
class CityData
{
private:
	int LocationId;		// city location value ( 1000~9999 )
	char * name;		// city name
	char * country;		// country name 


public:
	CityData();
	~CityData();

	int GetLocationId();		// Get LocationId
	char * Getname();			// Get name
	char * Getcountry();		// Get country

	void SetLocationId(int LocationId);			// Set LocationId
	void Setname(char * name);					// Set name
	void Setcountry(char * country);			// Set country
};

