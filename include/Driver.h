#pragma once
#include"Personal.h"

class Driver : public Personal {
protected:

public:
	Driver(int id, string name, int worktime, int base) : Personal(id, name, worktime, base) {
		setPayment();
	}
};
