#include<iostream>
#include <iostream>
using namespace std;
int main(){
		int i, j;
	
	int rows=7;
	
	//For Upper 
	int x=rows/2;
	for(int i=0;i<x;i++)
	{
	  for(int k=0;k<(2*(rows/2))+1;k++)
	     cout<<" ";	
		
		int a;
		if(i==0)
		{
		  cout<<" ";
	      a=x-2-i;
	    }
	    else
	    {
	      a=x-1-i;
	    }
		for(int j=a;j>0;j--)
		{
			cout<<"  ";
		}
		if(i==0)
		a=(2*i)+1;
		else
		a=(2*i);
		for(int j=0;j<a;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
		
	}

    //For Middle
    for(int i=0;i<=rows*1.5;i++)
    {
    	cout<<"* ";
	}
    cout<<"\n";
   //For Lower Layer
   for(int i=0;i<(rows/2);i++)
   {
   	for(int k=0;k<=1;k++)
   	{
   	  for(int j=0;j<(rows/2)-i;j++)
   	    cout<<" ";
   	  if(i!=0&&k!=0)
   	  for(int j=0;j<(rows)*i;j++)
   	    cout<<" ";
   	  for(int j=0;j<(rows/2)-i;j++)
   	    cout<<"* "; 
   	    
    }
    cout<<"\n";
   	
   }

    return 0;
}

 // *
// ***
//*****
