#include<iostream>
using namespace std;
int main() {
             int day, month;
              
              cout<<"Enter the day in number between 1 and 31: "<<endl;
              cin>>day;
              cout<<"Enter the month in number between 1 and 12: "<<endl;
              cin>>month;
              
            if(  (month == 12 && day >= 16 && day<=31) ||
			     (month == 1 && day <= 31) || (month ==2 && day <= 29) ||
			     (month == 3 && day <= 15)  ){
			   	    cout<<"The current season is Winter. "<<endl;         }
           
	    	else if( (month == 3 && day >= 16 && day <= 31) ||
			         (month == 4 && day <= 30) || (month == 5 && day <= 31) ||
				     (month == 6 && day <= 15) ){
					cout<<"The current season is spring. "<<endl;         }
			
		    else if(  (month == 6 && day >= 16 && day <= 30) ||
			          (month == 7 && day <= 31) || (month == 8 && day <= 31) ||
			 	      (month == 9 && day <= 15) ){
				   	 cout<<"The current season is Summer. "<<endl;        }
				   	 
		    else if(  (month == 9 && day >= 16 && day <= 30) ||
			          (month == 10 && day <= 31) || (month == 11 && day <= 30) ||
					  (month == 12 && day <= 15) ){
					 cout<<"The current season is Fall. "<<endl;          }
		    
		     else cout<<"Invalid date or month entered. "<<endl;
		    
        return 0;
}

