#include <iostream>
using namespace std;

int main(){
/* Program to find subtotal, sales tax and total of 5 items
   st = Amount of sales tax.                            */
        
        float item1= 15.95, item2= 24.95, item3= 6.95, item4= 12.95, item5= 3.95;
        float subtotal, st, total;
        
        cout<<"The price of item 1 is $"<<item1<<endl;
        cout<<"The price of item 2 is $"<<item2<<endl;
        cout<<"The price of item 3 is $"<<item3<<endl;
        cout<<"The price of item 4 is $"<<item4<<endl;
        cout<<"The price of item 5 is $"<<item5<<endl;
        
        subtotal = item1+item2+item3+item4+item5;
        cout<<"The subtotal of the sale is $"<<subtotal<<endl<<endl;
        
        st = .07*subtotal;
        cout<<"The amount of sales tax is $"<<st<<endl<<endl;
        
        total = subtotal + st;
        cout<<"The total is $"<<total<<endl;
        
        
        return 0;
            }