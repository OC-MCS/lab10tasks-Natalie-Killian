#include <iostream>
#include "CargoShip.h"
#include "CruiseShip.h"
#include "Ship.h"

using namespace std;

int main()
{
	const int NUM_SHIPS = 3;

	Ship *ships[NUM_SHIPS] =
	{ new Ship("Marie", "1990"),
		new CruiseShip("Grand Beauty", "2008", 50000),
		new CargoShip("Paul", "1980", 1500000)
	};

	for (int i = 0; i < NUM_SHIPS; i++)
	{
		cout << "Ship Number: " << (i + 1) << endl;
		ships[i]->printInfo();
		cout << endl;
	}

	return 0;
}


//Demonstrate the classes in a program that has an array of Ship pointers.The array
//elements should be initialized with the addresses of dynamically allocated Ship,
//CruiseShip, and CargoShip objects. (See Program 15 - 14, lines 17 through 22, for an
//	example of how to do this.) The program should then step through the array, calling
//	each object’s print function.