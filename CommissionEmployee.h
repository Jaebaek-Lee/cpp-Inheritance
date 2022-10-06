#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#pragma once

#include <string>
//베이스 클래스의 클래스 선언
class CommissionEmployee
{
public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0); //객체는 참조자로 받아야 효율이 좋다.
	// 0.0으로 기본값이 설정된 double타입 변수 두개는, 해당 변수가 인자로 들어오지 않았을 경우 0.0으로 처리된다.

	void setFirstName(const std::string&); //퍼스트 네임 설정
	std::string getFirstName() const; //퍼스트 네임 반환

	void setLastName(const std::string&); //라스트 네임 설정
	std::string getLastName() const; //라스트 네임 반환. 근데 string&로 반환하면 어떻게 될까?

	void setSocialSecurityNumber(const std::string&); //여기부터 아래까지는 모두 일반적인 겟, 셋 함수이다.
	std::string getSocialSecurityNumber() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double);
	double getCommissionRate() const; //겟 셋 함수의 끝부분.

	double earnings() const; //노동자가 번 돈을 반환...
	std::string toString() const; //우리가 가진 값들을 스트링으로 변환...
	
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif
