#include <iostream>

using namespace std;

int main () 
{
	int age;
	cout << "what is your age?\n";
	cin >> age;
	
	if (age < 16){
		cout << "you are too young too drink.\n";
	}
	else if (age == 16){
		cout << "you are better to clear the road.\n";
	}
	else {
		cout << "you are getting pretty old.\n";
	}
	return 0;
	
}