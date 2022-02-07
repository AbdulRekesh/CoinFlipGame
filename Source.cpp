#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main() {

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 15);
	int input;

	cout << "Conflip application." << endl;

	while (true) {
		cout << "1.\tFlip Coin." << endl;
		cout << "2.\tExit" << endl;
		cout << "Choose Option > " << flush;
		cin >> input;
		int iNumber = rand() % 2 + 1;
		cout << endl;
		switch (input) {
		case 1:
			cout << "Flipping Coin." << endl << endl;
			if (iNumber == 1) {
				SetConsoleTextAttribute(h, 3);
				cout << "-= Coin lands on HEADS! =-" << endl << endl;
				SetConsoleTextAttribute(h, 15);
				cout << "Returning to selection" << endl << endl;
				break;
				main();
			}
			else {
				SetConsoleTextAttribute(h, 3);
				cout << "-= Coin Lands on TAILS! =-" << endl << endl;
				SetConsoleTextAttribute(h, 15);
				cout << "Returning to selection" << endl << endl;
				break;
				main();
			}
		case 2:
			cout << "Exiting Program." << endl;
			Sleep(1000);
			exit(1);
		}
		return main();
	}
 
}

