#include<iostream>
using namespace std;
double calcTerm(); 
double SumTerms(double);
const double Pi = 3.142;

int main(){
	      float x= 40;
	    
		cout<<"Enter value of x : ";
	    cin>>x;
	    calcTerm();
	    cout << "The sum of the series is : "<<SumTerms(x);
	   
	    return 0;
	}
double calcTerm(){
			double x, sum= 1, nice= 1, y= 1, pow= 1;
			x= x *(Pi / 180.0);

			for(int i= 1; i< 5; i++){
				nice= nice * -1;
				y= y* (2*i-1) * (2*i);
	   			pow= pow * x * x; 
}
	 return 0;
}
double SumTerms(double x){
			x= x* (Pi / 180.0);
			double sum= 1, nice= 1, y= 1, pow= 1;

		for(int i= 1; i< 5; i++){
		nice = nice* -1;
		y= y* (2*i-1) * (2*i);
		pow= pow*x*x;
		sum= sum + nice * pow / y;
}


	return sum;
}

