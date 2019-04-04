// main goes here
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"

using namespace std;

int main()
{
	ProductionWorker worker1("Bob", "123", "03/12/18", 1, 17.50);

	cout << "---Production Worker---" << endl;
	cout << "--------------------------" << endl;
	cout << "Employee Name: " << worker1.getName() << endl;
	cout << "Employee Number: " << worker1.getNumber() << endl;
	cout << "Date of hire: " << worker1.getDate() << endl;
	cout << "Shift: " << worker1.getShift() << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Hourly Pay: $" << worker1.getPayRate() << endl;

	ShiftSupervisor super1("Larry", "001", "07/21/2004", 55750, 1500);

	cout << endl << "---Shift Supervisor---" << endl;
	cout << "--------------------------" << endl;
	cout << "Employee Name: " << super1.getName() << endl;
	cout << "Employee Number: " << super1.getNumber() << endl;
	cout << "Date of hire: " << super1.getDate() << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Annual Salary: $" << super1.getSalary() << endl;
	cout << "Yearly Bonus: $" << super1.getBonus() << endl;

	return 0;
}


// Demonstrate the classes by writing a program that
//uses a ProductionWorker object.