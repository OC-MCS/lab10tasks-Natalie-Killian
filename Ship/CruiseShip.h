#pragma once
#include "Ship.h"

class CruiseShip : public Ship
{
private:
	int maxPass;
public:
	CruiseShip(string n, string yr, int pass);
	void setPass(int pass);
	int getPass() const;
	virtual void printInfo() const;
};



//Design a CruiseShip class that is derived from the Ship class.The CruiseShip class
//should have the following members :
//• A member variable for the maximum number of passengers(an int)
//• A constructor and appropriate accessors and mutators
//• A print function that overrides the print function in the base class.The CruiseShip
//class’s print function should display only the ship’s name and the maximum number
//of passengers.