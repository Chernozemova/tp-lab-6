#pragma once
#include"Programmer.h"
#include"Heading.h"

class TeamLeader:public Programmer, public Heading {
protected:
	int people;
	double headingBase;
public:
	TeamLeader(int id, string name, int worktime, int base, string prjName, int budget, double contribution, int people, int headingBase) :
		Programmer(id, name, worktime, base, prjName, budget, contribution) {

		this->people = people;
		this->headingBase = headingBase;
		setPayment();
	}
	double CalcPayment() override{
		 return base * worktime;
	}
	
	double headingPayment() override {
		return headingBase * people;
	}

	double projectPayment() override {
		return budget * contribution;
	}

	void setPayment() override{
		payment = CalcPayment() + headingPayment() + projectPayment();
	}
};

