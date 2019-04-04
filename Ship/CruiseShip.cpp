#include "CruiseShip.h"
#include "Ship.h"
#include <iostream>

using namespace std;

// constructor
CruiseShip::CruiseShip(string n, string yr, int pass) : Ship(n, yr)
{
	maxPass = pass;
}

// setter function
void CruiseShip::setPass(int pass)
{
	maxPass = pass;
}

// getter function
int CruiseShip::getPass() const
{
	return maxPass;
}

// print function
void CruiseShip::printInfo() const
{
	cout << "Ship Name: " << getName() << endl;
	cout << "Maximum Number of Passengers: " << maxPass << endl;
}