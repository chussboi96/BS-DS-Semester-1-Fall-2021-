#include <iostream>
#include <iomanip>
using namespace std;

int main(){
/* Program to convert US dollars to Pakistani rupee
   and then to euros. Pakistani rupee = pkr      */
           
        long int PKR_PER_DOLLAR= 170.50, EURO_PER_DOLLAR= 0.86;
        long int amount, DOLLAR_TO_PKR, DOLLAR_TO_EURO;
        
        cout<<"Enter the US Dollar amount you want to convert : ";
        cin>>amount;
        cout<<endl;
        
        DOLLAR_TO_PKR = amount * PKR_PER_DOLLAR ;
        DOLLAR_TO_EURO = amount * EURO_PER_DOLLAR;
        
        cout<<setprecision(2)<<fixed;
        cout<<"The dollar amount is $"<<amount<<endl;
        cout<<"The Pakistani rupees amount is "<<DOLLAR_TO_PKR<<endl;
        cout<<"The Euro amount is "<<DOLLAR_TO_EURO<<endl;
        
        return 0;
        
            }