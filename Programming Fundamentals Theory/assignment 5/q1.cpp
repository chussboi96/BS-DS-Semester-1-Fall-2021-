#include <iostream>
using namespace std;
int main(){
	
		int M= 6, N= 7, x= 12;
		
		int A[M]= {3, 2, 1, 7, 6, 3};
		int B[N]= {9, 3, 5, 6, 2, 8, 10};
		int C[13], a= 0;
 
  		cout<<"Array C is= ";
  		
		for(int i= 0; i< M; i++)
{	    if( A[i] % 2 == 0){
	        C[a]= A[i];
	        a++;			}
	            
		else{ C[x]= A[i];
	          x--;		  }
}
   
		for(int j= 0; j< N; j++)  
{
		        if(B[j] % 2 == 0)
		{       C[a] = B[j];
		        a++;		 }
		        
		    else{   C[x] = B[j];
		            x--;		 }
}
		cout<<"Array C is = C [";
		for(int k= 0; k<= 12; k++) 
		  cout<<C[k]<<" ";
	
		cout<<"]";
		
	return 0;
}
