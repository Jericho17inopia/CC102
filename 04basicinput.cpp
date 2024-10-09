#include <iostream>

using namespace std;

int main() {
	string nickname, CYL, School;
	
	cout << "Nickname: " ;
	cin >> nickname;
	cout << "Course-Year Level: " ;
	cin >> CYL;
	cout << "School: " ;
	cin >> School;
	
	cout << "Wow Congrats " << nickname << "! " << CYL << " is a nice course. And your are studying in " << School << " which is one of the center of excellent in tartiry Education.";
    return 0;
}