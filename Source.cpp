#include <iostream>
#include <stdlib.h>
#include <windows.h>
using std::cout;
using std::cin;
int main() {

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);	// Creates handle to used SetConsoleTextAttribute
	SetConsoleTextAttribute(h, 15); // Sets console text to bright white
	srand(time(NULL));
	char choice; // Initialize choice

	do {	// Creates a loop
		cout
		<< "Coinflip application.\n"
		<< "What would you like to do?\n"
		<< "(q)uit or (f)lip a coin:\t"
		<< std::flush;

		cin >> choice;
		if (choice == 'f') {
			srand(time(NULL));
			int iNumber = (rand() % 2) + 1;	// Randomizes iNumber between 1 and 2
			if (iNumber == 1) {
			SetConsoleTextAttribute(h, 3);	// Changes console color to cyan
			cout << std::endl << "-= Coin lands on HEADS! =-\n" << std::endl;
			SetConsoleTextAttribute(h, 15); // Changes console color to bright white
			cout << "Returning to selection\n" << std::endl;
			}
			else {
				SetConsoleTextAttribute(h, 3);	//sets console color to blue
				cout << std::endl << "-= Coin Lands on TAILS! =-\n" << std::endl;
				SetConsoleTextAttribute(h, 15);
				cout << "Returning to selection\n" << std::endl;
			}
		}
		else if (choice == 'q') {	// If the choice is not q then it is invalid and return to the top of do
			cout << "Invalid answer." << std::endl;
		}
	} while (choice != 'q'); // makes the do loop
	exit(1); // Exits program
	return 0;
}