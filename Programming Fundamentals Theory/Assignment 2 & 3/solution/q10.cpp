#include<iostream>
using namespace std;
int main() {
              char character;
              int storeAscii;
              cout<<"Enter a character: ";
              cin>>character;
              
              storeAscii=character;
             cout<<"The ASCII value of "<<character<<" is "<<storeAscii<<"."<<endl;
             
            if (storeAscii>=48 && storeAscii<=57){
             cout<<"You entered a digit."<<endl;        }
            else if (storeAscii>=65 && storeAscii<=90){
             cout<<"You entered a capital letter."<<endl; }
            else if (storeAscii>=97 && storeAscii<=122){
             cout<<"You entered a small letter."<<endl;  }
            else 
             cout<<"You have entered a special character."<<endl;  
             
        return 0;
}