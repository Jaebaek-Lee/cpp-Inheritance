#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h"

//���̽� Ŭ������ �Լ� ���Ǻ��̴�.

CommissionEmployee::CommissionEmployee(const std::string& first, const std::string& last, const std::string& ssn, double sales, double rate) { //�����ںκ�. ��ü�� &��.
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate); //���⼭ ���� �� �Լ� �ΰ��� ȣ���� �ʿ䰡 ����. ���� ������!!!!
}

void CommissionEmployee::setFirstName(const std::string& first) { //�Ϲ����� �� �Լ�. �Ʒ��� �� �Ϲ����� �� ��.
	firstName = first;
}

std::string CommissionEmployee::getFirstName() const { return firstName; } //�Ϲ����� ��...

void CommissionEmployee::setLastName(const std::string& last) { //�Ϲ����� ��...
	lastName = last;
}

std::string CommissionEmployee::getLastName() const { return lastName; } //��Ʈ���� ��

void CommissionEmployee::setSocialSecurityNumber(const std::string& ssn) { //��ť��Ƽ �ѹ� ��..
	socialSecurityNumber = ssn;
}

std::string CommissionEmployee::getSocialSecurityNumber() const { return socialSecurityNumber; } //��ť��Ƽ �ѹ� ��...

void CommissionEmployee::setGrossSales(double sales) {
	if (sales < 0.0) {
		throw std::invalid_argument("Gross sales must be >= 0.0"); //����ó�� �κ�. �׷��� Ʈ���� ĳġ�� ���⿡ �ҿ����ϴ�. �ӱ��� ������ ū�ϳ���.
	}

	grossSales = sales;
}

double CommissionEmployee::getGrossSales() const { return grossSales; }

void CommissionEmployee::setCommissionRate(double rate) {
	if (rate <= 0.0 || rate >= 1.0) {
		throw std::invalid_argument("Commission rate must be > 0.0 and < 1.0"); //�̰� ������ ū�ϳ��ŵ��... ������� ��������.
	}

	commissionRate = rate;
}

double CommissionEmployee::getCommissionRate() const { return commissionRate; }

double CommissionEmployee::earnings() const {
	return commissionRate * grossSales;
}

std::string CommissionEmployee::toString() const { //�� �ϴ��Ŵ�. ��Ʈ�� �����ϰ� ���ϴ°� �־��ְ� ��Ʈ������ ��ȯ�ؼ� ��ȯ�Ѵ�.
	std::ostringstream output;
	output << std::fixed << std::setprecision(2);
	output << "commission employee: " << firstName << " " << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
	return output.str();
}