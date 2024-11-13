#include <iostream>

using namespace std;

int main () 
{
	int temp;
	
	cout << "The temperature today is: ";
	cin >> temp;
	
	if (temp<32){
	cout << "Please bring a heavy jacket\n";
	}
	if else (temp>=32 && temp <=50){
		cout << "Please, bring a light jacket.\n";
	}
	else {
		cout << "Don`t bring any jacket.\n";
	}
	return 0;
}