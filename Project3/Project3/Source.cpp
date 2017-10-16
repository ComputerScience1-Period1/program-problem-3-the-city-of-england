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
	int count = 0;
	while (count < 30) {
		count = count + 1;

		int x;
		cout << "Choose a 3 Digit Number";
		cin >> x;
		int C = x / 100;
		int B = (x % 100) / 10;
		int A = (x % 10);
		if (C > B && B > A) {
			cout << "Is Descending";
		}
		else if (A > B && B > C) {
			cout << "Is Ascending";
		}
		else {
			cout << "Is Neither ascending nor descending";
		};
		pause();
	}
}
