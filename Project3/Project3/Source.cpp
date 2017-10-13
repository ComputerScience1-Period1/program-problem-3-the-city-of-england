/*
 +Isaiah Dunegan - 10/06/17 First Period  (Justin Schrader Edit)
 +Assignment Name: Three_Digit_Ascend_Descend_Selection
 +Take in a three digit number, split those three digits, and have the console discern if the order of the three digits is ascending or descending.*/
	
//Libraries
	#include <iostream> // allows access to cin, cout, endl, <<, >>, boolalpha, and noboolalpha
	 #include <conio.h> // allows access to _kbhit() and _getch() for puase()
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
void main() {// The math allows us to take each number seperately and turn them into seperate variables.
	int count = 0;
	while (count < 30)
	{
		count = count + 1;
		int x;
		cout << "Choose a random 3 digit number ";
		cin >> x;
		int C = x / 100;
		int B = (x % 100) / 10;
		int A = (x % 10);
		if (C > B && B > A) {
			cout << "Descending ";

		}
		else if (A > B && B > C) {
			cout << "Ascending ";

		}
		else {
			cout << "Neither ascending nor descending ";
			
		}
		pause();
	}
}
