#include "CityData.h"

CityData::CityData()
{
	LocationId = 0;
	name = new char[50];
	country = new char[50];
}

CityData::~CityData()
{
}

int CityData::GetLocationId()
{
	return 0;
}

char * CityData::Getname()
{
	return NULL;
}

char * CityData::Getcountry()
{
	return NULL;
}

void CityData::SetLocationId(int LocationId)
{
}

void CityData::Setname(char * name)
{
}

void CityData::Setcountry(char * country)
{
}
