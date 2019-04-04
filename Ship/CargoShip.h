#pragma once
#include "Ship.h"

class CargoShip : public Ship
{
private:
	int cargoCap;
public:
	CargoShip(string n, string yr, int cargo);
	void setCap(int cargo);
	int getCap() const;
	virtual void printInfo() const;
};


//Design a CargoShip class that is derived from the Ship class.The CargoShip class
//should have the following members :
//• A member variable for the cargo capacity in tonnage(an int).
//• A constructor and appropriate accessors and mutators.
//• A print function that overrides the print function in the base class.The CargoShip
//class’s print function should display only the ship’s name and the ship’s cargo capacity.