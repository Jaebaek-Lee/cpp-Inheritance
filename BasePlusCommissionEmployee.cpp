#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"

//�Ļ� Ŭ������ �Լ� ���Ǻ�

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string& first, const std::string& last, const std::string& ssn, double sales, double rate, double salary) 
: CommissionEmployee(first, last, ssn, sales, rate), baseSalary{salary} {} //�̴ϼȶ����� ����Ʈ. ������ �ʱ�ȭ ����� �;��Ѵ�. ���� ���������� setBaseSalary(salary)���� ����� �Ұ���. ��ü�� ������ ���������� �����ϴ�.
//���̽� Ŭ������ �Ļ�Ŭ���� ���� �ܰ迡�� �����ߴ�. �׷��� ���̽� Ŭ������ �������� �Ļ�Ŭ������ �Ű������� �ʱ�ȭ�� �� �ִ�.

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary < 0.0) {
		throw std::invalid_argument("Salary must be >= 0.0"); //���� ó����. Ʈ���� ĳġ�� ��� �ҿ����ϴ�. ���̽� �������� 0���� Ŀ���Ѵ�.
	}

	baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() { //�Ϲ����� ���Լ�
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const { //const�� �ڿ� �پ���. ���� �ȿ��� ȣ��Ǵ� �Լ��鵵 const���� �Ѵ�.
	return baseSalary + (getCommissionRate() * getGrossSales()); //���⼭ ���� �� �Լ��� ��� 'const ��� �Լ�'�̴�.
	//����, ���⼭ commissionrate�� grosssales �� ��ü�� ���̽� Ŭ������ private �����̴�. ��� ��쿡 �־ �Ļ� Ŭ������ ���̽� Ŭ������ private ������ ����������
	//������ �Ұ����ϴ�. ���� �Լ��� ���� �����ؾ��Ѵ�.
}

std::string BasePlusCommissionEmployee::toString() const { //���� ���������� const����Լ��� const����Լ��� ȣ���� �� �ִ�. ?: �׷� setprecision�� ����? a: �´� ����Լ��� �ƴϴ�.
	std::ostringstream output;
	output << std::fixed << std::setprecision(2);
	output << "base-salaried commission employee: " << getFirstName() << " " << getLastName() //earnings �Լ��� ������ ������
		<< "\nsocial security number: " << getSocialSecurityNumber() //���̽� Ŭ������ private �������� ���� ������ �Ұ����ϱ� ������
		<< "\ngross sales: " << getGrossSales() //�Լ��� ����Ͽ�
		<< "\ncommission rate: " << getCommissionRate() //�����ߴ�.
		<< "\nbase salary: " << baseSalary; //basesalary�� �Ļ�Ŭ�������� ���ǵ� private �����̱� ������ ���� ������ �����ϴ�.
	return output.str();
}