#pragma once
#include <iostream>
using namespace std;

class Employee
{
private:
	string firstName;
	string lastName;
public:
	Employee();
	Employee(string firstName, string lastName);

	void setFirstName(string firstName);
	void setLastName(string lastName);

	string getFirstName();
	string getLastName();

	virtual double calculateSalary() = 0;
	virtual void display();
};