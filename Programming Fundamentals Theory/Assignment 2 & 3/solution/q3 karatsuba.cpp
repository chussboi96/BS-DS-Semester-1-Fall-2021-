#include <iostream>
using namespace std;
int main(){
           long  x1, x_a1, x_a2, y1, y_a1, y_a2, xb, yb;
           
           cout<<"Enter the first number: ";
           cin>>x1;
           cout<<"Enter the second number: ";
           cin>>y1;
           
        if( (x1 > 9999 && x1 < 99999999999 || x1 < -9999 && x1 > -99999999999) &&
            (y1 > 9999 && y1 < 99999999999 || y1 < -9999 && y1 > -99999999999)     )
{          x_a1= x1 / 1000;
           x_a2= x1 % 1000;
           cout<<"x1 = "<<x_a1<<".1000 + "<<x_a2<<endl;
           
           y_a1= y1 / 1000;
           y_a2= y1 % 1000;
           cout<<"y1 = "<<y_a1<<".1000 + "<<y_a2<<endl;
           
           xb= x_a1 * y_a1;
           yb= x_a2 * y_a2;
           
           int result = ((x_a1 + x_a2) * (y_a1 + y_a2)) - (xb) - (yb);
          
           long answer= (xb * 1000*1000) + (result * 1000) + yb;
            cout<<"The answer is "<<answer<<endl;
            
}       else cout<<"Invalid entry."<<endl;
          
    return 0;
}
