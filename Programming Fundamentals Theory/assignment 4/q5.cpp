#include <iostream>
using namespace std;
void perfectcalc(int);
int main(){
			int number;
			cout<<"Enter the number upto which you want to find perfect number: ";
			cin>>number;
			cout<<"The perfect numbers between 1 to "<<number<<" are ";
			perfectcalc(number);
			
  return 0;
}

void perfectcalc(int number){
		for(int i= 2; i< number; i++)
  {
  	int sum= 0;
  	for(int j= 1; j<=((i/2)+1); j++)
{
  	 if(i%j== 0)
	   	sum = sum + j;
	   	
}
	if(sum==i)
	cout<<i<<" and ";
	
  }
 			}

