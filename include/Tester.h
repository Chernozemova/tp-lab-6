#pragma once
#include"Engineer.h"

class Tester:public Engineer {
public:
	Tester(int id, string name, int worktime, int base, string prjName, int budget, double contribution) :
		Engineer(id, name, worktime, base, prjName, budget, contribution){

		setPayment();
	}
};