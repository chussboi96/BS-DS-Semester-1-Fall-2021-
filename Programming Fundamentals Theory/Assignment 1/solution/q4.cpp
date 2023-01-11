#include <iostream>
using namespace std;

int main(){
       
// A program that computes tax and tip on a restaurant bill
// Mc = meal cost, tax= 6.75% of Mc, total= Mc+tax AND tip= 20% of total
        
        float Mc=88.67, TAX_AMOUNT = .0675*Mc, TOTAL_BILL = Mc+TAX_AMOUNT;
        float TIP_AMOUNT = .20*TOTAL_BILL;

        cout<<"The meal cost is : $"<<Mc<<endl;
        cout<<"The tax charged on the meal is : $"<<TAX_AMOUNT<<endl;
        cout<<"The tip given is : $"<<TIP_AMOUNT<<endl;
        cout<<"The cost of the total bill is : $"<<TOTAL_BILL<<endl;
        
        return 0;
         
            }