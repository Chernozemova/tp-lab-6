#pragma once
#include"Manager.h"
#include"Heading.h"

class ProjectManager: public Manager, public Heading {
protected:
	int people;
	double headingBase;
public:
	ProjectManager(int id, string name, int worktime, string prjName, int budget, double prjBase, int people, double headingBase) :
		Manager(id, name, worktime, prjName, budget, prjBase) {
		this->people = people;
		this->headingBase = headingBase;
		setPayment();
	}

		double headingPayment() override {
			return headingBase * people;
		}
		
		void setPayment() override {
			payment = projectPayment()+headingPayment();
		}

};