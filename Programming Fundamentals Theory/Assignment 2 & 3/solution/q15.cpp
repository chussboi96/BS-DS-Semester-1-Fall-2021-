#include <iostream>
#include <iomanip>
using namespace std;
int main(){
           float seconds;
           float minutes, hours, days;
           
           cout<<"Enter the number of seconds: ";
           cin>>seconds;
           
           if(seconds > 0 && seconds < 60)
           cout<<"There are "<<seconds<<" seconds. "<<endl;
           
            else if(seconds >= 60 && seconds < 3600)
{              minutes = seconds / 60 ;
               cout<<"There are "<<fixed << setprecision(2) <<minutes<<" minutes.";
}          

            else if(seconds >= 3600 && seconds < 86400)
{               hours = seconds / 3600;
            cout<<"There are "<<fixed << setprecision(2)<<hours<<" hours.";
}            

            else if( seconds >= 86400)
{               days = seconds / 86400;
            cout<<"There are "<<fixed << setprecision(2)<<days<<" days."; 
}            
            
    return 0;
}
