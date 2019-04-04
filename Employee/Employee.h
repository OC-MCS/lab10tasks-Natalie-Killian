#pragma once
#include <string>

using namespace std;

class Employee
{
private:
	string name;
	string eNumber;
	string hireDate;
public:
	Employee(string n, string num, string date);
	string getName();
	string getNumber();
	string getDate();
	void setName(string n);
	void setNumber(string num);
	void setDate(string date);
};

//Employee and ProductionWorker Classes
//Design a class named Employee.The class should keep the following information in
//• Employee name
//• Employee number
//• Hire date
//Write one or more constructors and the appropriate accessor and mutator functions
//for the class.


