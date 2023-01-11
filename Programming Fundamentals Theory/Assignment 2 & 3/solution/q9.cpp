#include <iostream>
using namespace std;
int main(){
    
           int fine, days;
           
           cout<<"Enter the number of days the member was late to return the book to library: ";
           cin>>days;
           
           if(days > 0 && days <= 5){
               cout<<"The fine charged is 50 rupees.";   }
        else if(days >= 6 && days <= 10){
              cout<<"The fine charged is 100 rupees.";   }
        else if(days >= 11 && days <= 30){
              cout<<"The fine charged is 150 rupees.";   }
              
        else cout<<"Your membership has been cancelled.";

    return 0;
}
