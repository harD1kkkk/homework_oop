#include "Worker.h"

Worker::Worker() {
    hoursNumber = 0.0;
    hourlyRate = 0.0;
}

Worker::Worker(string firstName, string lastName, double hoursNumber, double hourlyRate)
    : Employee(firstName, lastName) {
    this->hoursNumber = hoursNumber;
    this->hourlyRate = hourlyRate;
}


void Worker::setHoursNumber(double hoursNumber) {
    this->hoursNumber = hoursNumber;
}

void Worker::setHourlyRate(double hourlyRate) {
    this->hourlyRate = hourlyRate;
}


double Worker::getHoursNumber() {
    return hoursNumber;
}

double Worker::getHourlyRate() {
    return hourlyRate;
}


double Worker::calculateSalary() {
    double salaryWorker = 0;

    // Regular pay
    if (hoursNumber <= 40) {
        salaryWorker = hoursNumber * hourlyRate;
    }
    // Overtime pay
    else {
        double standardPay = 40 * hourlyRate;  
        double overtimePay = (hoursNumber - 40) * hourlyRate * 2; 
        salaryWorker = standardPay + overtimePay;  
    }

    return salaryWorker;
}


void Worker::display() {
    cout << getFirstName() << " " << getLastName() << endl;
    cout << "hours number: " << getHoursNumber() << ", hourly rate: " << getHourlyRate() << ", month salary: " << calculateSalary() << endl;
}