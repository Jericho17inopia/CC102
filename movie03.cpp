#include <iostream>

using namespace std;

int main() {
	int age;
	double money;
	bool parent;
	string show, budget;
	cout << "Enter your age: ";
	cin >> age;
	if (age<13) {
		cout << "with parent?";
		cin >> parent;
		if (parent) 
			show="PG & G show.";
		else
			show="G show.";
	}
	else if (age<16) { 
		cout << "with Parent?";
		cin >> parent;
		if (parent)
			show="R, PG & G show";
		else 
			show = "PG & G show";
	}
	else
		show="R, PG & G show.";
	cout << "Enter money:";
	cin >> money;
	if (money<7.5)
		budget= "Not enough money.";
	else if (money<10.5)
		budget = "You can to Matinee show.";
	else 
		budget = "Can go to matine & evening show.";
	cout << show << endl;
	cout << budget << endl;
	
	return 0;
}
