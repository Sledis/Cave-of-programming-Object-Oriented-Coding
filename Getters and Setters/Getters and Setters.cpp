// Getters and Setters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person person;
	person.setName("Georgina");

	cout << person.toString() << endl;

	cout << "Name of person with get method: " << person.getName() << endl;

	return 0;
}

