#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main() {

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);	// Creates handle to used SetConsoleTextAttribute
	SetConsoleTextAttribute(h, 15); // Sets console text to bright white
	int input;	// Initialized int

	cout << "Conflip application." << endl;

	while (true) {	// Creates a while loop
		cout << "1.\tFlip Coin." << endl;
		cout << "2.\tExit" << endl;
		cout << "Choose Option > " << flush;
		cin >> input;
		int iNumber = rand() % 2 + 1;	// Randomizes iNumber between 1 and 2
		cout << endl;
		switch (input) {	//creates a menu to navigate with
		case 1:
			cout << "Flipping Coin." << endl << endl;
			if (iNumber == 1) {	// Checks if iNumber is equal to 1
				SetConsoleTextAttribute(h, 3);
				cout << "-= Coin lands on HEADS! =-" << endl << endl;
				SetConsoleTextAttribute(h, 15);
				cout << "Returning to selection" << endl << endl;
				break;	// breaks
				main(); // returns to main
			}
			else {	// if iNumber is anything besides 1
				SetConsoleTextAttribute(h, 3);	//sets console color to blue
				cout << "-= Coin Lands on TAILS! =-" << endl << endl;
				SetConsoleTextAttribute(h, 15);
				cout << "Returning to selection" << endl << endl;
				break;
				main();
			}
		case 2:	// Runs this menu when input is equal to number 2
			cout << "Exiting Program." << endl;
			Sleep(1000);
			exit(1);	// Closes program
		}
		return main();
	}
 
}

