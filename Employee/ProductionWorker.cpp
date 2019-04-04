#include "ProductionWorker.h"
#include "Employee.h"

ProductionWorker::ProductionWorker(string n, string num, string date, int s, double pay) : Employee(n, num, date)
{
	shift = s;
	payRate = pay;
}

// getter function for shift
int ProductionWorker::getShift()
{
	return shift;
}
// setter function to set shift
void ProductionWorker::setShift(int s)
{
	shift = s;
}

// getter function for payRate
double ProductionWorker::getPayRate()
{
	return payRate;
}
// setter function to set payRate
void ProductionWorker::setPayRate(double r)
{
	payRate = r;
}
