#include "Ship.h"
#include <iostream>

using namespace std;

// constructor
Ship::Ship(string n, string yr)
{
	name = n;
	yearBuilt = yr;
}
void Ship::setName(string n)
{
	name = n;
}
string Ship::getName() const
{
	return name;
}
void Ship::setYear(string yr)
{
	yearBuilt = yr;
}
string Ship::getYear() const
{
	return yearBuilt;
}
// virtual function
void Ship::printInfo() const
{
	cout << "Ship Name: " << name << endl;
	cout << "Year Built: " << yearBuilt << endl;
}