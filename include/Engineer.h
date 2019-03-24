#pragma once
#include"Worktime.h"
#include"Employee.h"
#include"Project.h"

class Engineer:public Employee, public Worktime, public Project {
protected:
	int base;
	string prjName;
	int budget; //бюджет проекта
	double contribution; //вклад в проект
public:
	Engineer() {};

	Engineer(int id, string name, int worktime, int base, string prjName, int budget, double contribution):
		Employee(id, name, worktime) {
		this->prjName = prjName;
		this->budget = budget;
		this->contribution = contribution;
		this->base = base;
	} 

	double projectPayment() override {
		double cash = contribution * budget;
		return cash;
	}

	double CalcPayment() override{
		double pay = base * worktime;
		return pay;
	}

	void setPayment() override {
		payment = projectPayment() + CalcPayment();
	}
};