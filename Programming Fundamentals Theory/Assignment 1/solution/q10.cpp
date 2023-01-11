#include <iostream>
#include <iomanip>
using namespace std;

int main(){
// Program to find income generated from ticket sales
        
        float ClassA= 15.00, ClassB= 12.00, ClassC= 9.00;
        float a, b, c, total;
        
      // a = number of Class A tickets sold
        cout<<"Enter the number of Class A tickets sold : ";
        cin>> a;

      // b = number of Class B tickets sold
        cout<<"Enter the number of Class B tickets sold : ";
        cin>> b;
        
     // c - number of Ckass C tickets sold
        cout<<"Enter the number of Class C tickets sold : ";
        cin>> c;
        
        cout<<setprecision(2)<<fixed;
        total = (a*ClassA) + (b*ClassB) + (c*ClassC);
        cout<<"The amount of income generated from ticket sales was $"<<total<<endl;
        
        return 0;
        
            }