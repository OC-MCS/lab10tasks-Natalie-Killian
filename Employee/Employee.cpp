#include "Employee.h"


// constructor
Employee::Employee(string n, string num, string date)
{
	name = n;
	eNumber = num;
	hireDate = date;
}

// mutator function to set employee name
void Employee::setName(string n)
{
	name = n;
}
// getter function to return employee name
string Employee::getName()
{
	return name;
}

// mutator function to set employee number
void Employee::setNumber(string num)
{
	eNumber = num;
}
// getter function to return employee number
string Employee::getNumber()
{
	return eNumber;
}

// mutator function to set hire date
void Employee::setDate(string date)
{
	hireDate = date;
}
// getter function to return hire date
string Employee::getDate()
{
	return hireDate;
}