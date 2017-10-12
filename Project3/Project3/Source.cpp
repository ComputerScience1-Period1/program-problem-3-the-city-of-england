/*
Isaiah Dunegan - 10/06/17 First Period
Assignment Name: Three_Digit_Ascend_Descend_Selection
Take in a three digit number, split those three digits, and have the console discern if the order of the three digits is ascending or descending.*/

//Libraries
#include <iostream> //access to some stuff like endl and variables
#include <conio.h> // _kbhit and yeah
// Namespaces

using namespace std;

// Functions()

void pause() {
	cout << "Press any key to continue...";
	while (_kbhit());
	_getch();
	cout << "\n";
}
//MAIN
void main() {
	bool cond = true;
		while (cond) { int var_number;
	cin >> var_number;
	int onedigit = var_number/100;
	int tendigit = (var_number%100)/10;
	int hundreddigit = (var_number%10);
	if (onedigit > tendigit && tendigit > hundreddigit) {
		cout << "Descending";
	}
	else if (hundreddigit > tendigit && tendigit > onedigit) {
		cout << "Ascending";
	}
	else {
		cout << "Neither ascending nor descending";
	};
	};
	
	pause();
}
