#pragma once
#include "Employee.h"

class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker(string n, string num, string date, int s, double pay);
	int getShift();
	void setShift(int s);
	double getPayRate();
	void setPayRate(double r);
};


//Next, write a class named ProductionWorker that is derived from the Employee class.
//The ProductionWorker class should have member variables to hold the following
//information :
//• Shift(an integer)
//• Hourly pay rate(a double)
//The workday is divided into two shifts : day and night.The shift variable will hold an
//integer value representing the shift that the employee works.The day shift is shift 1, and
//the night shift is shift 2. Write one or more constructors and the appropriate accessor
//and mutator functions for the class.