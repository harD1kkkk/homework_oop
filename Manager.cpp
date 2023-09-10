#include "Manager.h"  

Manager::Manager() {
	clientCount = 1;
}

Manager::Manager(string firstName, string lastName, double salary, double bonus, int clientCount) 
	: SalaryWorker(firstName, lastName, salary, bonus) {
	this->clientCount = clientCount;
}


void Manager::setClientCount(int clientCount) {
	this->clientCount = clientCount;
}


int Manager::getClientCount() {
	return clientCount;
}


double Manager::calculateBonus() {
	double Bonus;
	if (getBonus() < 100) {
		return Bonus = getBonus();
	}
	else if (getBonus() >= 100 && getBonus() < 200) {
		return Bonus = getBonus() * 2;
	}
	else if (getBonus() >= 200) {
		return Bonus = getBonus() * 3;
	}
}


void Manager::display() {
	cout << getFirstName() << " " << getLastName() << endl;
	cout << "salary: " << getSalary() << ", bonus: " << calculateBonus() << ", client count: " << getClientCount() << ", month salary: " << calculateSalary() << endl;
}