#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#pragma once

#include <string>
//���̽� Ŭ������ Ŭ���� ����
class CommissionEmployee
{
public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0); //��ü�� �����ڷ� �޾ƾ� ȿ���� ����.
	// 0.0���� �⺻���� ������ doubleŸ�� ���� �ΰ���, �ش� ������ ���ڷ� ������ �ʾ��� ��� 0.0���� ó���ȴ�.

	void setFirstName(const std::string&); //�۽�Ʈ ���� ����
	std::string getFirstName() const; //�۽�Ʈ ���� ��ȯ

	void setLastName(const std::string&); //��Ʈ ���� ����
	std::string getLastName() const; //��Ʈ ���� ��ȯ. �ٵ� string&�� ��ȯ�ϸ� ��� �ɱ�?

	void setSocialSecurityNumber(const std::string&); //������� �Ʒ������� ��� �Ϲ����� ��, �� �Լ��̴�.
	std::string getSocialSecurityNumber() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double);
	double getCommissionRate() const; //�� �� �Լ��� ���κ�.

	double earnings() const; //�뵿�ڰ� �� ���� ��ȯ...
	std::string toString() const; //�츮�� ���� ������ ��Ʈ������ ��ȯ...
	
private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSales;
	double commissionRate;
};

#endif
