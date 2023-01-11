#include <iostream>
using namespace std;

long reverse(long digit) {
	if(digit > 999999999) {
		cout<<"Number out of range, returning 0....."<<endl;
		return 0;
	}
	long rev = 0;
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;

}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit != 0) {
		rev += (digit%10);
		rev *= 10;
		digit /= 10;
	}
	if(digit == 0)
		rev /= 10;
	return rev;
}

int main(){ 
            long digit;
            cout<<"Enter the number you want to reverse."<<endl;
            cin>>digit;
            
        long reverse(long digit);
        cout<<reverse(digit);

}








