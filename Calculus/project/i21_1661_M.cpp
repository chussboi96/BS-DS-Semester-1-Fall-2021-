#include<iostream>
#include<iomanip>
using namespace std;
int main(){ 
			double a, b, c, x, y;
			int X[9] = {-4, -3, -2, -1, 0, 1, 2, 3, 4};
			int Y[9];
			// Ax^2 + bx + c
		cout<<"Enter the values of a: ";
		cin>>a;
		cout<<"Enter the values of b: ";
		cin>>b;
		cout<<"Enter the values of c: ";
		cin>>c;
		cout<<"\nThe equation becomes: "<<a<<"*x*2 + "<<b<<"*x*1 + "<<c<<endl<<endl;
        
		cout<<"The Table used for drawing the graph is :"<<endl;
        for(int i= 0; i< 9; i++){				   // loop to stores values in array Y according to x
        Y[i]= a * (X[i]*X[i]) + (b*X[i]) + c;     // y= a*(x*x) + (b*x) + c;
        y = Y[i]; 
}		
    	for(int i= 0; i< 9; i++)
    	cout<<X[i]<<"->"<<Y[i]<<",  ";
			
	for(int i= 0; i< 9; i++)
{			for(int j=0;j<10-i;j++)
			if(Y[j]<Y[j+1])
			{
				int temp=Y[j];		// Array is sorted according to y because once
				Y[j]=Y[j+1];		// 
				Y[j+1]=temp;
				
				temp=X[j];
				X[j]=X[j+1];
				X[j+1]=temp;
			}								
}
/*		 cout<<"\n\nSorted:\n";		
	     for(int i= 0; i< 9; i++)
    	 cout<<X[i]<<"->"<<Y[i]<<", ";		*/
	
	for(int i= Y[0]; i>= Y[8]; i--)
{		cout<<endl;
        int K[]={0,0,0,0,0,0,0,0,0};
        for(int j= 0; j< 9; j++)
        {
		   if(Y[j]== i)
		   K[ X[j] +4] = 1;
		}
		 
		for(int j= 0; j<= 8; j++)	
		{
			if( K[j] == 1 )
			cout<<"*";
			else
			cout<<" ";
		}
}

		int first_dev= 2*a*x + b;
	cout<<"\n\n\nFirst Derivative: 2*a*x + b"<<endl;
	cout<<"Extreme point lies corresponding to x="<<first_dev<<endl;
	
	int second_dev= 2*a + 0;
	if(second_dev > 0)
	cout<<"From 2nd derivative, extreme point is MINIMA";
	if(second_dev < 0)
	cout<<"From 2nd derivative, extreme point is MAXIMA";

	return 0;
}

