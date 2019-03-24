#pragma once
#include<iostream>
#include<string>

using namespace std;

class Employee {
protected:
	int id;
	string name;
	int worktime;
	double payment;
public:
	Employee(){};

	Employee(int id, string name, int worktime) {
		this->id = id;
		this->name = name;
		this->worktime = worktime;
	}

	virtual void setPayment(){}

	double getPayment() {
		return payment;
	}
	
	int getId() {
		return id;
	}

	string getName() {
		return name;
	}
};

