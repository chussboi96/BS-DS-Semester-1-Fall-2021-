#include <iostream>
using namespace std;
int main(){
			int num1, num2;
			bool choice;
			
		cout<<"Enter first integer: "<<endl;
		cin>>num1;
		cout<<"Enter second integer: "<<endl;
		cin>>num2;
		
		cout<<"Enter 1 if you want to find HCF and press 0 if you want to find LCM"<<endl;
		cin>>choice;
		
		switch(choice){
		case(1):{
			
		int hcf;
		
		if (num2 > num1){    	 
	int x = num2;
		 num2 = num1 ;
		 num1 = x;
}
		for(int i= 1; i<= num2 ; ++i){
		    if ( (num1 % i== 0) && (num2 % i== 0) ) 
			hcf= i;
}
		
		cout<<"The highest common factor of both integers is : "<<hcf<<endl;
	}
		case(0):{
			int LCM= 0;
			if(num2 > num1)
			LCM = num2;
		
		else
		LCM = num1;
		do
{		if( (LCM % num1== 0) && (LCM % num2== 0) ){
		cout<<"The least common multiple of both integers is : "<<LCM;
		break;
	}
				else
				++LCM;
		}
					while(1);
	}
}
		
		return 0;
}
