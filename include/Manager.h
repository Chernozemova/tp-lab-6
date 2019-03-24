#pragma once
#include"Employee.h"
#include"Project.h"

class Manager : public Employee, public Project {
protected:
	double prjBase;
	string prjName;
	int budget;
public:
	Manager(int id, string name, int worktime, string prjName, int budget, double prjBase) : Employee(id, name, worktime=0) {
		this->prjBase = prjBase;
		this->prjName = prjName;
		this->budget = budget;
		setPayment();
	}

	double projectPayment() override{
		return  prjBase* budget;
	}

	void setPayment() override {
		payment = projectPayment();
	}
};