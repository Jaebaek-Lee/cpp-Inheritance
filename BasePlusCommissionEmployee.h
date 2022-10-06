#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "CommissionEmployee.h"
#pragma once

//파생 클래스의 클래스 선언부.
//파생 클래스는 베이스 클래스를 포함해야하기 때문에, 헤더에서 베이스 클래스의 헤더파일을 인클루드한다.

class BasePlusCommissionEmployee : public CommissionEmployee { //베이스 클래스를 public으로 상속받았다.
public:
	BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0); //하나를 덜 넣으면 가장 우측인 성과급이 0.0으로. 같은 원리로 나머지 두개까지 가능.
	void setBaseSalary(double); //추가된 베이스샐러리를 셋
	double getBaseSalary(); //추가된 베이스샐러리 겟
	double earnings() const; //추가된 어닝 함수. 그런데 같은 이름의 함수가 베이스 클래스에도 있다. 이때 메인에서 호출하면 파생 클래스의 어닝을 가져오고, 베이스 어닝은 가려진다.
	std::string toString() const; //어닝과 같은 이유로 베이스 클래스의 투스트링 함수를 가린다.
private:
	double baseSalary; //추가된 변수
};

#endif
