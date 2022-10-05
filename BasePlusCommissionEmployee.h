#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "CommissionEmployee.h"
#pragma once

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
	BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0); //�ϳ��� �� ������ ���� ������ �������� 0.0����.
	void setBaseSalary(double);
	double getBaseSalary();
	double earnings() const;
	std::string toString() const;
private:
	double baseSalary;
};

#endif
