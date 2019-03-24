#include "Cleaner.h"
#include"Tester.h"
#include "Engineer.h"
#include "TeamLeader.h"
#include "createState.h"
#include <vector>

int main() {

	Cleaner f(4, "Kolya", 120, 110);
	//cout << f.getPayment();
	TeamLeader m(4, "lenya", 160, 120, "octave", 100000, 0.05, 5, 1500);
	//cout << m.getPayment();

	vector <Employee*> k;


	k = createState("employee.txt");


	getchar();
}