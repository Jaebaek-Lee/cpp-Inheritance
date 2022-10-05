#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string& first, const std::string& last, const std::string& ssn, double sales, double rate, double salary) 
: CommissionEmployee(first, last, ssn, sales, rate), baseSalary{salary} {} //하나를 덜 넣으면 가장 우측인 성과급이 0.0으로.

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary < 0.0) {
		throw std::invalid_argument("Salary must be >= 0.0");
	}

	baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() {
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
	return baseSalary + (getCommissionRate() * getGrossSales());
}

std::string BasePlusCommissionEmployee::toString() const {
	std::ostringstream output;
	output << std::fixed << std::setprecision(2);
	output << "commission employee: " << getFirstName() << " " << getLastName()
		<< "\nsocial security number: " << getSocialSecurityNumber()
		<< "\ngross sales: " << getGrossSales()
		<< "\ncommission rate: " << getCommissionRate()
		<< "\nbase salary: " << baseSalary;
	return output.str();
}