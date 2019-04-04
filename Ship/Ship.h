#pragma once
#include <string>

using namespace std;

class Ship
{
private:
	string name;
	string yearBuilt;
public:
	Ship(string n, string yr);
	void setName(string n);
	string getName() const;
	void setYear(string yr);
	string getYear() const;
	virtual void printInfo() const;
};


//Design a Ship class that has the following members :
//• A member variable for the name of the ship(a string)
//• A member variable for the year that the ship was built(a string)
//• A constructor and appropriate accessors and mutators
//• A virtual print function that displays the ship’s name and the year it was built.