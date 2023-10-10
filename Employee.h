#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    int weekly_hours;
    double hourly_rate;
    int vacation_days;

public:
    Employee(const std::string& name, int weekly_hours);
    virtual ~Employee() = default;
    virtual double calculateWeeklySalary() const = 0;
    virtual double calculateHealthCareContributions() const = 0;
    virtual int calculateVacationDays() const = 0;
};

class Professional : public Employee {
public:
    Professional(const std::string& name, int weekly_hours);
    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDays() const override;
};

class Nonprofessional : public Employee {
public:
    Nonprofessional(const std::string& name, int weekly_hours);
    double calculateWeeklySalary() const override;
    double calculateHealthCareContributions() const override;
    int calculateVacationDays() const override;
};

#endif  // EMPLOYEE_H
