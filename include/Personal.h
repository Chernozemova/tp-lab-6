#pragma once
#include"Employee.h"
#include"Worktime.h"

class Personal : public Employee, public Worktime {
protected:
	int base;

public:

	Personal(int id, string name, int worktime, int base) : Employee(id, name, worktime) {
		this->base = base;
	}

	double CalcPayment() override{
		double pay = worktime * base;
		return pay;
	}

	void setPayment() override {
		payment = CalcPayment();
	};
};

