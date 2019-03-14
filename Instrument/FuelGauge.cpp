#include "FuelGauge.h"
#include <iostream>

using namespace std;

// default constructor
FuelGauge::FuelGauge()
{
	gallons = 0;
}

// get current amount of gallons
int FuelGauge::getGallons()
{
	return gallons;
}

// increment amount of fuel by one gallon
void FuelGauge::fillUp()
{
	if (gallons < 15)
	{
		gallons += 1;
	}
	else
	{
		cout << "Fuel tank is already full!\n";
	}
}

// decrement amount of fuel by one gallon
void FuelGauge::burnFuel()
{
	if (gallons > 0)
	{
		gallons -= 1;
	}
	else
	{
		cout << "You are out of gas! Fill up immediately!!!\n";
	}
}