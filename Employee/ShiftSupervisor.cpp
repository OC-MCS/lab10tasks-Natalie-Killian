#include "ShiftSupervisor.h"
#include "Employee.h"

using namespace std;

// constructor
ShiftSupervisor::ShiftSupervisor(string n, string num, string date, double sal, double bon) : Employee(n, num, date)
{
	salary = sal;
	bonus = bon;
}
// getter for salary
double ShiftSupervisor::getSalary()
{
	return salary;
}
// setter to set salary
void ShiftSupervisor::setSalary(double sal)
{
	salary = sal;
}

// getter for bonus
double ShiftSupervisor::getBonus()
{
	return bonus;
}
// setter to set bonus
void ShiftSupervisor::setBonus(double bon)
{
	bonus = bon;
}