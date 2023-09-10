#pragma once
#include "SalaryWorker.h"
class Salesman :
    public SalaryWorker
{
private:
    double planPercentage;
public:
    Salesman();
    Salesman(string firstName, string lastName, double salary, double bonus, double planPercentage);

    void setPlanP(double planPercentage);
    double getPlanP();

    double calculateBonus() override;
    void display() override;
};