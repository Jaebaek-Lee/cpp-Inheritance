#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"
//파생 클래스가 베이스 클래스를 가지고 있기 때문에 메인에서는 파생클래스만 include해도 된다.
using namespace std;
//namespace는 메인에서만 호출하는 것이... 포화방지 등등의 이유로 좋다.
int main()
{
	BasePlusCommissionEmployee employee{ "Bob", "Lewis", "333-33-3333", 5000, .04, 300}; //여기서 마지막 300을 빼주면...? 그럼 그냥 성과급이 0으로 처리되고 잘 작동한다.
	//위에서 언급한 것 처럼 파생 클래스를 호출하면 그 안에서 베이스 클래스를 호출할 것이다. 여기서 베이스 클래스를 호출하는 것은 큰 의미가 없다.
	cout << fixed << setprecision(2);
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstName() //베이스 클래스의 함수
		<< "\nLast name is " << employee.getLastName() //베이스 클래스의 함수
		<< "\nSocial security number is "
		<< employee.getSocialSecurityNumber() //베이스 클래스의 함수
		<< "\nGross sales is " << employee.getGrossSales() //베이스 클래스의 함수
		<< "\nCommission rate is " << employee.getCommissionRate() //베이스 클래스의 함수
		//여기까지 전부 파생클래스가 베이스로부터 public으로 상속받았기 때문에 접근이 가능하다.
		<< "\nBase salary is " << employee.getBaseSalary() << endl; //파생 클래스에서 추가된 함수

	employee.setBaseSalary(1000); //파생 클래스에서 추가된 함수
	cout << "\nUpdated employee information from function toString: \n\n"
		<< employee.BasePlusCommissionEmployee::toString(); //베이스 클래스와 파생 클래스에서 생성한 함수 명이 같으면, 컴파일러는 해당 함수가 호출되었을때 파생 클래스의
	//함수로 인식한다. 따라서 이를 구분하기 위해 명시적으로 경로를 지정해줬다.

	cout << "\n\nEmployee's earnings: $" << employee.BasePlusCommissionEmployee::earnings() << endl; //위와 같은 이유로 경로를 지정해줬다.
}