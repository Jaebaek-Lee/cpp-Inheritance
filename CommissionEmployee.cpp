#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.h"

//베이스 클래스의 함수 정의부이다.

CommissionEmployee::CommissionEmployee(const std::string& first, const std::string& last, const std::string& ssn, double sales, double rate) { //생성자부분. 객체는 &로.
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate); //여기서 굳이 이 함수 두개를 호출할 필요가 없다. 디텔 아저씨!!!!
}

void CommissionEmployee::setFirstName(const std::string& first) { //일반적인 셋 함수. 아래도 다 일반적인 겟 셋.
	firstName = first;
}

std::string CommissionEmployee::getFirstName() const { return firstName; } //일반적인 겟...

void CommissionEmployee::setLastName(const std::string& last) { //일반적인 셋...
	lastName = last;
}

std::string CommissionEmployee::getLastName() const { return lastName; } //라스트네임 겟

void CommissionEmployee::setSocialSecurityNumber(const std::string& ssn) { //시큐리티 넘버 셋..
	socialSecurityNumber = ssn;
}

std::string CommissionEmployee::getSocialSecurityNumber() const { return socialSecurityNumber; } //시큐리티 넘버 겟...

void CommissionEmployee::setGrossSales(double sales) {
	if (sales < 0.0) {
		throw std::invalid_argument("Gross sales must be >= 0.0"); //예외처리 부분. 그러나 트라이 캐치가 없기에 불완전하다. 임금이 음수면 큰일난다.
	}

	grossSales = sales;
}

double CommissionEmployee::getGrossSales() const { return grossSales; }

void CommissionEmployee::setCommissionRate(double rate) {
	if (rate <= 0.0 || rate >= 1.0) {
		throw std::invalid_argument("Commission rate must be > 0.0 and < 1.0"); //이거 음수면 큰일나거든요... 백분율로 생각하자.
	}

	commissionRate = rate;
}

double CommissionEmployee::getCommissionRate() const { return commissionRate; }

double CommissionEmployee::earnings() const {
	return commissionRate * grossSales;
}

std::string CommissionEmployee::toString() const { //늘 하던거다. 스트림 생성하고 원하는거 넣어주고 스트링으로 변환해서 반환한다.
	std::ostringstream output;
	output << std::fixed << std::setprecision(2);
	output << "commission employee: " << firstName << " " << lastName
		<< "\nsocial security number: " << socialSecurityNumber
		<< "\ngross sales: " << grossSales
		<< "\ncommission rate: " << commissionRate;
	return output.str();
}