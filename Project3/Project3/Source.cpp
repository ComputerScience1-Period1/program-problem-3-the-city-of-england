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
	while (i<30) {    //ask for number and check it 30 times
		i = i + 1;

		//declare variables
		int number;
		cin >> number;    //ask for three digit number
		int C = number / 100;     //hundreds digit
		int B = (number % 100) / 10;    //tens digit
		int A = (number % 10);   //ones digit

		if (C > B && B > A) {          //check number if descending
			cout << "Descending \n";
		}
		else if (A > B && B > C) {    //check number if ascending
			cout << "Ascending \n";
		}
		else {
			cout << "Neither \n";
		}

	}
	pause();


}
