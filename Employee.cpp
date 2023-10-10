#include "Employee.h"

Employee::Employee(const std::string& name, int weekly_hours) : name(name), weekly_hours(weekly_hours) {}

Professional::Professional(const std::string& name, int weekly_hours) : Employee(name, weekly_hours) {
    hourly_rate = 40.0; // Assuming a fixed hourly rate for professionals
}

double Professional::calculateWeeklySalary() const {
    return hourly_rate * weekly_hours;
}

double Professional::calculateHealthCareContributions() const {
    // Implement your own logic for healthcare contributions for professionals
    return 100.0;
}

int Professional::calculateVacationDays() const {
    // Implement your own logic for vacation days for professionals
    return 7;
}

Nonprofessional::Nonprofessional(const std::string& name, int weekly_hours) : Employee(name, weekly_hours) {
    hourly_rate = 20.0; // Assuming a fixed hourly rate for nonprofessionals
}

double Nonprofessional::calculateWeeklySalary() const {
    return hourly_rate * weekly_hours;
}

double Nonprofessional::calculateHealthCareContributions() const {
    // Implement your own logic for healthcare contributions for nonprofessionals
    return 50.0;
}

int Nonprofessional::calculateVacationDays() const {
    // Implement your own logic for vacation days for nonprofessionals
    return weekly_hours / 10;
}
