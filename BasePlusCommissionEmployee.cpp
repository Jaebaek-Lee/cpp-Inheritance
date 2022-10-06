#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h"

//파생 클래스의 함수 정의부

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string& first, const std::string& last, const std::string& ssn, double sales, double rate, double salary) 
: CommissionEmployee(first, last, ssn, sales, rate), baseSalary{salary} {} //이니셜라이저 리스트. 좌측에 초기화 대상이 와야한다. 따라서 독단적으로 setBaseSalary(salary)같은 사용은 불가능. 객체의 생성은 예외적으로 가능하다.
//베이스 클래스를 파생클래스 생성 단계에서 생성했다. 그러면 베이스 클래스의 변수들을 파생클래스의 매개변수로 초기화할 수 있다.

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
	if (salary < 0.0) {
		throw std::invalid_argument("Salary must be >= 0.0"); //예외 처리문. 트라이 캐치가 없어서 불완전하다. 베이스 샐러리도 0보다 커야한다.
	}

	baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary() { //일반적인 겟함수
	return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const { //const가 뒤에 붙었다. 따라서 안에서 호출되는 함수들도 const여야 한다.
	return baseSalary + (getCommissionRate() * getGrossSales()); //여기서 사용된 두 함수는 모두 'const 멤버 함수'이다.
	//또한, 여기서 commissionrate와 grosssales 그 자체는 베이스 클래스의 private 변수이다. 모든 경우에 있어서 파생 클래스는 베이스 클래스의 private 변수에 직접적으로
	//접근이 불가능하다. 따라서 함수를 통해 접근해야한다.
}

std::string BasePlusCommissionEmployee::toString() const { //위와 마찬가지로 const멤버함수는 const멤버함수만 호출할 수 있다. ?: 그럼 setprecision은 뭔가? a: 걔는 멤버함수가 아니다.
	std::ostringstream output;
	output << std::fixed << std::setprecision(2);
	output << "base-salaried commission employee: " << getFirstName() << " " << getLastName() //earnings 함수와 동일한 이유로
		<< "\nsocial security number: " << getSocialSecurityNumber() //베이스 클래스의 private 변수에는 직접 접근이 불가능하기 때문에
		<< "\ngross sales: " << getGrossSales() //함수를 사용하여
		<< "\ncommission rate: " << getCommissionRate() //접근했다.
		<< "\nbase salary: " << baseSalary; //basesalary는 파생클래스에서 정의된 private 변수이기 때문에 직접 접근이 가능하다.
	return output.str();
}