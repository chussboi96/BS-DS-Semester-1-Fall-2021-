#include <iostream>
using namespace std;
int reversefunc(int digits){
	int reversed= 0, remaining;
			
		while(digits!= 0) {
			remaining= digits % 10;
		    reversed = (reversed * 10) + remaining;
		    digits /= 10;
}

	return reversed;
} 

int main(){
			int digits, i=0, no_of_digits, x;

	cout<<"Enter any number: ";
	cin>>digits;

	if (i>10) 
		cout<<"Number out of range, returning 0....."<<endl;

	else	cout<<reversefunc(digits)<<endl;  
		
return 0;
}


