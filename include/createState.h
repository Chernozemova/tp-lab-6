#pragma once
#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include"Tester.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include <vector>
#include <iostream>
#include <fstream>

vector<Employee*> createState(string fileName) {
	ifstream file(fileName);
	vector <Employee*> staff;
	int id, worktime, rate, budget, people, size;
	string firstName, secondName;
	double payment, contribution, headingBase, prjBase;
	string profession, prjName;
	if (file.is_open())
	{
		while (file >> id) {
			file >> firstName >> secondName >> profession;
			if (profession == "Cleaner")
			{
				file >> worktime >> rate;
				staff.push_back(new Cleaner(id, firstName + ' ' + secondName, worktime, rate));
			}
			if (profession == "Driver") {
				file >> worktime >> rate;
				staff.push_back(new Driver(id, firstName + ' ' + secondName, worktime, rate));
			}
			if (profession == "Tester") {
				file >> worktime >> rate >> prjName >> budget >> contribution;
				staff.push_back(new Tester(id, firstName + ' ' + secondName, worktime, rate, prjName, budget, contribution));
			}
			if (profession == "Programmer") {
				file >> worktime >> rate >> prjName >> budget >> contribution;
				staff.push_back(new Programmer(id, firstName + ' ' + secondName, worktime, rate, prjName, budget, contribution));
			}
			if (profession == "TeamLeader") {
				file >> worktime >> rate >> prjName >> budget >> contribution >> people >> headingBase;
				staff.push_back(new TeamLeader(id, firstName + ' ' + secondName, worktime, rate, prjName, budget, contribution, people, headingBase));
			}
			if (profession == "Manager") {
				file >> prjName >> budget >> prjBase;
				staff.push_back(new Manager(id, firstName + ' ' + secondName, 0, prjName, budget, prjBase));
			}
			if (profession == "ProjectManager") {
				file >> prjName >> budget >> prjBase >> people >> headingBase;
				staff.push_back(new ProjectManager(id, firstName + ' ' + secondName, 0, prjName, budget, prjBase, people, headingBase));
			}
			if (profession == "SeniorManager") {
				file >> prjName >> budget >> prjBase >> people >> headingBase;
				staff.push_back(new SeniorManager(id, firstName + ' ' + secondName, 0, prjName, budget, prjBase, people, headingBase));
			}
		}
		size = staff.size();
		for (int i = 0; i < size; i++) {
			cout << "ID: " << staff[i]->getId() << " Name: " << staff[i]->getName() << " ZP: " << staff[i]->getPayment() << endl;
		}

	}
	return staff;

};