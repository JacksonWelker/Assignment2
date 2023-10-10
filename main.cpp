#include <iostream>
#include "Single_Linked_List.h"
#include "Employee.h"

int main() {
    // Testing Single_Linked_List class
    Single_Linked_List<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;
    std::cout << "Size: " << list.empty() << std::endl;
    list.insert(1, 4);
    list.remove(2);

    // Testing Employee classes
    Professional professional("John", 40);
    Nonprofessional nonprofessional("Alice", 30);

    std::cout << "Professional Weekly Salary: " << professional.calculateWeeklySalary() << std::endl;
    std::cout << "Professional Health Care Contributions: " << professional.calculateHealthCareContributions() << std::endl;
    std::cout << "Professional Vacation Days: " << professional.calculateVacationDays() << std::endl;

    std::cout << "Nonprofessional Weekly Salary: " << nonprofessional.calculateWeeklySalary() << std::endl;
    std::cout << "Nonprofessional Health Care Contributions: " << nonprofessional.calculateHealthCareContributions() << std::endl;
    std::cout << "Nonprofessional Vacation Days: " << nonprofessional.calculateVacationDays() << std::endl;

    return 0;
}
