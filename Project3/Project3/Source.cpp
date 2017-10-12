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
	int i = 0;
	while (i < 30) {
		i = i + 1;

		int number;
		cin >> number;
		int C = number / 100; // Changed "x" to "number" to make it more specific
		int B = (number % 100) / 10; // Make sure you mention which variable is the 2nd and 3rd digit.
		int A = (number % 10); // Make sure you mention which variable is the 1st digit 
		if (C > B && B > A) {
			cout << "Descending";
		}
		else if (A > B && B > C) {
			cout << "Ascending";
		}
		else {
			cout << "Neither ascending nor descending";
		};

	}pause();\
}
