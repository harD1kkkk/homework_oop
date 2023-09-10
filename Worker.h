#pragma once
#include "Employee.h"

class Worker 
    : public Employee
{
private:
    double hoursNumber;
    double hourlyRate;

public:
    Worker();
    Worker(string firstName, string lastName, double hoursNumber, double hourlyRate);

    void setHoursNumber(double hoursNumber);
    void setHourlyRate(double hourlyRate);

    double getHoursNumber();
    double getHourlyRate();

    double calculateSalary() override;
    void display() override;
};