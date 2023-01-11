#include <iostream>
using namespace std;
int main(){
		int Asize = 0, Bsize = 0, Csize = 0;
		bool value = false;
		cout << "Enter array size : ";
		cin >> Asize;
		Bsize = Asize;
		int A[Asize], B[Bsize];
	for (int i = 0 ; i < Asize ; i++)
{
		cout << "Enter value in array A at index " << i << " : ";
		cin >> A[i]; 
}
	for (int i = 0 ; i < Bsize ; i++)
	{
		cout << "Enter value in array B at index " << i << " : ";
		cin >> B[i]; 
	}
	for (int i = 0 ; i < Asize ; i++)
	{
		if (A[i] != B[i])
		{
			goto compare;
		}
	}
	cout << "Arrays are equal with same elements ." << endl ;
	goto end;
	
	compare:
	for (int i = 0 ; i < Asize ; i++)
	{
		value = false;
		for (int j = 0 ; j < Bsize ; j++)
		{
			if ( A[i] == B[j] )
			{
				value = true;
			}
		}
		if (value == false)
		{
			cout<<"Arrays are not equal"<<endl ;
			goto end;
		}
	}	
	cout<<"Array have SAME elements but not in matching order."<<endl;
	
	end:
		return 0;
}
