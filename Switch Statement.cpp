#include <iostream>
using namespace std;

int main()
{
	char choice;
	
	cout << "Press '1' For Option-A";
	cout << "\nPress '2' For Option-B";
	cout << "\nPress '3' For Option-C";
	cout << "\nPress '4' For Option-D";
	cout << "\nPress '5' For Option-E";
	cout << "\nEnter Your choice: ";
	
	cin >> choice;
	
	switch(choice)
	{
		case '1':
			cout << "Option-A" << endl;
		break;
		case '2':
			cout << "Option-B" << endl;
		break;
		case '3':
			cout << "Option-C" << endl;
		break;
		case '4':
			cout << "Option-D" << endl;
		break;
		case '5':
			cout << "Option-E" << endl;
		break;
		default:
			cout << "Invalid Input...";
		break;
	}
	
}