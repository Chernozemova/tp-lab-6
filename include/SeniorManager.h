#pragma once
#include"ProjectManager.h"

class SeniorManager: public ProjectManager {
public:
	SeniorManager(int id, string name, int worktime, string prjName, int budget, double prjBase, int people, double headingBase) :
		ProjectManager(id, name, worktime, prjName, budget, prjBase, people, headingBase) {

	}

	void setPayment() override {
		payment = (projectPayment() + headingPayment())*2;
	}
};