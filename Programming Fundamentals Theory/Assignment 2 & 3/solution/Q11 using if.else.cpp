#include <iostream>
#include <windows.h>
using namespace std;

int main() {
             string primaryColor1 = "";
             string primaryColor2 = "";

	   cout << "Enter First alphabet of first primary color: ";
	   cin >> primaryColor1;
       cout << "Enter First alphabet second primary color: ";
	   cin >> primaryColor2;
	   cout << endl;

	if (primaryColor1 == "R") {
		primaryColor1 = "r";
	}
	else if (primaryColor1 == "B") {
		primaryColor1 = "b";
	}
	else if (primaryColor1 == "Y") {
		primaryColor1 = "y";
	}

	if (primaryColor2 == "R") {
		primaryColor2 = "r";
	}
	else if (primaryColor2 == "B") {
		primaryColor2 = "b";
	}
	else if (primaryColor2 == "Y") {
		primaryColor2 = "y";
	}

	if (primaryColor1 == "r" || primaryColor1 == "b" || primaryColor1 == "y") {

		if (primaryColor2 == "r" || primaryColor2 == "b" || primaryColor2 == "y") {
			
			if (primaryColor1 != primaryColor2 ) {
				if ((primaryColor1 == "r" && primaryColor2 == "b") || (primaryColor1 == "b" && primaryColor2 == "r")) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
					cout << "Resultant color after mixing: Purple." << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				}
				else if ((primaryColor1 == "r" && primaryColor2 == "y") || (primaryColor1 == "y" && primaryColor2 == "r")) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
					cout << "Resultant color after mixing: Orange." << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				}
				else if ((primaryColor1 == "b" && primaryColor2 == "y") || (primaryColor1 == "y" && primaryColor2 == "b")) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					cout << "Resultant color after mixing: Green." << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				}
			}
			else {
				cout<<"Error, you entered the same primary colour twice, ";
				cout<<"can't use them to make a secondary colour."<<endl;
			}
		}
	else { cout<<"Error, The color you entered was not a primary colour."<<endl;
		     }
	}
	else { cout<<"ERROR"<<endl;
	     }

	return 0;
}
