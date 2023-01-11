#include <iostream>
#include <windows.h>
using namespace std;

int main() {
             char primaryColor1;
             char primaryColor2;

	   cout<<"Enter First alphabet of first primary color: ";
	   cin >> primaryColor1;
       cout<< "Enter First alphabet second primary color: ";
	   cin >> primaryColor2;
	   cout<< endl;

	    switch (primaryColor1) {
		case 'R':
			primaryColor1 = 'r';
			break;
		case 'Y':
			primaryColor1 = 'y';
			break;
		case 'B':
			primaryColor1 = 'b';
			break;
	}    
    	switch (primaryColor2) {
		case 'R':
			primaryColor2 = 'r';
			break;
		case 'Y':
			primaryColor2 = 'y';
			break;
		case 'B':
			primaryColor2 = 'b';
			break;
	}
      switch(primaryColor1)
     {
         case 'r':
         case 'b':
         case 'y':
         switch(primaryColor2)
     {
         case 'r':
         case 'b':
         case 'y':
         if (primaryColor1 != primaryColor2 ) {
            switch(primaryColor1)
            {   case 'r':
                switch(primaryColor2)
                {
                    case 'b':
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
					cout << "Resultant color after mixing: Purple." << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
		        
					case 'y':
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
					cout << "Resultant color after mixing: Orange." << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
                }
                break;
                case 'b':
                   switch(primaryColor2)
                {
                    case 'y':
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					cout << "Resultant color after mixing: Green." << endl;
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
					break;
                }
            }
         }
         else
         {
           	cout<<"Error, you entered the same primary colour twice, ";
		    cout<<"can't use them to make a secondary colour."<<endl;  
         }
        break;
        default:
        cout<<"Error, The color you entered was not a primary colour."<<endl; 
         
         
     }
     break;
     default:
      cout<<"ERROR"<<endl;                         }

	return 0;
}
