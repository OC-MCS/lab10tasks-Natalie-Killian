#pragma once
class FuelGauge
{
private:
	int gallons;
public:
	FuelGauge(); // default constructor
	int getGallons(); // getter function
	void fillUp(); // increment amount of fuel
	void burnFuel(); // decrement amount of fuel
};
