#include "Odometer.h" 
#include "FuelGauge.h"
#include <iostream>

using namespace std;

// default constructor
Odometer::Odometer()
{
	mileage = 0;
}

// get current number of miles
int Odometer::getMileage()
{
	return mileage;
}

// increment mileage by one mile
void Odometer::addMile(FuelGauge &gallons)
{
	if (mileage < 999,999)
	{
		mileage += 1;
	}
	else
	{
		mileage = 0;
	}
	if (mileage % 24 == 0)
	{
		gallons.burnFuel();
	}
}
