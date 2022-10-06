#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H
#include "CommissionEmployee.h"
#pragma once

//�Ļ� Ŭ������ Ŭ���� �����.
//�Ļ� Ŭ������ ���̽� Ŭ������ �����ؾ��ϱ� ������, ������� ���̽� Ŭ������ ��������� ��Ŭ����Ѵ�.

class BasePlusCommissionEmployee : public CommissionEmployee { //���̽� Ŭ������ public���� ��ӹ޾Ҵ�.
public:
	BasePlusCommissionEmployee(const std::string&, const std::string&, const std::string&, double = 0.0, double = 0.0, double = 0.0); //�ϳ��� �� ������ ���� ������ �������� 0.0����. ���� ������ ������ �ΰ����� ����.
	void setBaseSalary(double); //�߰��� ���̽��������� ��
	double getBaseSalary(); //�߰��� ���̽������� ��
	double earnings() const; //�߰��� ��� �Լ�. �׷��� ���� �̸��� �Լ��� ���̽� Ŭ�������� �ִ�. �̶� ���ο��� ȣ���ϸ� �Ļ� Ŭ������ ����� ��������, ���̽� ����� ��������.
	std::string toString() const; //��װ� ���� ������ ���̽� Ŭ������ ����Ʈ�� �Լ��� ������.
private:
	double baseSalary; //�߰��� ����
};

#endif
