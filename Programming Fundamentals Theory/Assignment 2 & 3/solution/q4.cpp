#include <iostream>
#include <windows.h>
using namespace std;
int main() {
            int number;
            int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8;
             
            cout<<"Enter a number: ";
            cin>>number;
            
            bit1 = number % 2;
            number/= 2;
            
            bit2 = number % 2;
            number/= 2;
            
            bit3 = number % 2;
            number/= 2;
            
            bit4 = number % 2;
            number/= 2;
            
            bit5 = number % 2;
            number/= 2;
            
            bit6 = number % 2;
            number/= 2;
            
            bit7 = number % 2;
            number/= 2;
            
            bit8 = number % 2;
            number/= 2;
            
            cout<<bit8<<bit7<<bit6<<bit5<<bit4<<bit3<<bit2<<bit1<<endl;
            
            if(bit8 == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
                cout<<"****************************************************"<<endl;    }
                else cout<<""<<endl;
            if(bit7 == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
                cout<<"****************************************************"<<endl;    }
                else cout<<""<<endl;
            if(bit6 == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                cout<<"****************************************************"<<endl;    }
                else cout<<""<<endl;
            if(bit5 == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                cout<<"****************************************************"<<endl;    }
                else cout<<""<<endl;
            if(bit4 == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
                cout<<"****************************************************"<<endl;    }
                else cout<<""<<endl;
            if(bit3 == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
                cout<<"****************************************************"<<endl;    }
                else cout<<""<<endl;
            if(bit2 == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                cout<<"****************************************************"<<endl;    }
                else cout<<""<<endl;
            if(bit1 == 1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
                cout<<"****************************************************"<<endl;    }
                else cout<<""<<endl;
            
	return 0;
}
