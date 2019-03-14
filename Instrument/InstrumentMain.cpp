#include "FuelGauge.h"
#include "Odometer.h"
#include <iostream>

using namespace std;

// main code goes here

int main()
{
	FuelGauge fuel;
	Odometer miles;

	// tries to fill car up with 17 gallons
	for (int i = 0; i < 17; i++)
	{
		fuel.fillUp();
	}

	// goes for drive till we run out of fuel!
	while (fuel.getGallons() > 0)
	{
		miles.addMile(fuel);
		cout << "Mileage: " << miles.getMileage() << " miles" << endl;
		cout << "Fuel: " << fuel.getGallons() << " gallons" << endl;
		cout << endl;
	}

	return 0;
}