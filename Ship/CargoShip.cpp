#include "CargoShip.h"
#include "Ship.h"
#include <iostream>

using namespace std;

// constructor
CargoShip::CargoShip(string n, string yr, int cargo) : Ship(n, yr)
{
	cargoCap = cargo;
}

// setter function
void CargoShip::setCap(int cargo)
{
	cargoCap = cargo;
}

// getter function
int CargoShip::getCap() const
{
	return cargoCap;
}

// print function
void CargoShip::printInfo() const
{
	cout << "Ship Name: " << getName() << endl;
	cout << "Cargo Capacity (in tons): " << cargoCap << endl;
}