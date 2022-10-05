#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "CommissionEmployee.h"
#pragma once

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
	BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0); //하나를 덜 넣으면 가장 우측인 성과급이 0.0으로.
	void setBaseSalary(double);
	double getBaseSalary();
	double earnings() const;
	std::string toString() const;
private:
	double baseSalary;
};

#endif
