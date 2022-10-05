#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"

using namespace std;

/*과제 백업용 임시 제출입니다!!!!
주석이 빠져있습니다.*/

int main()
{
	BasePlusCommissionEmployee employee{ "Bob", "Lewis", "333-33-3333", 5000, .04, 300 };

	cout << fixed << setprecision(2);
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nSocial security number is "
		<< employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate()
		<< "\nBase salary is " << employee.getBaseSalary() << endl;

	employee.setBaseSalary(1000);
	cout << "\nUpdated employee information from function toString: \n\n"
		<< employee.BasePlusCommissionEmployee::toString();

	cout << "\n\nEmployee's earnings: $" << employee.BasePlusCommissionEmployee::earnings() << endl;
}