#include <iostream>
using namespace std;
int main() {
            int number;
            string name;
            int bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, bit9, bit10; 
            int bit11, bit12, bit13, bit14, bit15, bit16, bit17, bit18, bit19, bit20; 
            int bit21, bit22, bit23, bit24, bit25, bit26, bit27, bit28, bit29, bit30; 
            int bit31, bit32;
            
            cout<<"Enter Name of Army Man: ";
            cin>>name;
            cout<<"Enter ID of Army Man: ";
            cin>>number;
            cout<<endl;
            
            bit1 = number % 2;
            number/= 2;
            
            bit2 = number % 2;
            number/= 2;
            
            bit3 = number % 2;
            number/= 2;
            
            bit4 = number % 2;
            number/= 2;
            
            bit5 = number % 2;
            number/= 2;
            
            bit6 = number % 2;
            number/= 2;
            
            bit7 = number % 2;
            number/= 2;
            
            int belt_no = (bit1*1)+(bit2*2)+(bit3*4)+(bit4*8)+(bit5*16)+(bit6*32)+(bit7*64);
            cout<<"Belt number of "<<name<<" is: "<<belt_no<<endl;
        
            
            bit8 = number % 2;
            number/= 2;
            
            bit9 = number % 2;
            number/= 2;
            
            bit10 = number % 2;
            number/= 2;
            
            bit11 = number % 2;
            number/= 2;
            
            bit12 = number % 2;
            number/= 2;
            
            bit13 = number % 2;
            number/= 2;
            
            bit14 = number % 2;
            number/= 2;
            
            bit15 = number % 2;
            number/= 2;
            
            bit16 = number % 2;
            number/= 2;
            
            bit17 = number % 2;
            number/= 2;
            
int batch_no=(bit8*1)+(bit9*2)+(bit10*4)+(bit11*8)+(bit12*16)+(bit13*32)+(bit14*64)+(bit15*128)+(bit16*256)+(bit17*512);
         cout<<"Batch number of "<<name<<" is: "<<batch_no<<endl;
            
            bit18 = number % 2;
            number/= 2;
            
            bit19 = number % 2;
            number/= 2;
            
            bit20 = number % 2;
            number/= 2;
            
            bit21 = number % 2;
            number/= 2;
            
            bit22 = number % 2;
            number/= 2;
            
            int log_no=(bit18*1)+(bit19*2)+(bit20*4)+(bit21*8)+(bit22*16);
        cout<<"Log number of "<<name<<" is: "<<log_no<<endl;
          
            bit23 = number % 2;
            number/= 2;
            
            bit24 = number % 2;
            number/= 2;
            
            bit25 = number % 2;
            number/= 2;
            
            bit26 = number % 2;
            number/= 2;
            
            bit27 = number % 2;
            number/= 2;
            
            bit28 = number % 2;
            number/= 2;
            
            bit29 = number % 2;
            number/= 2;
            
            bit30 = number % 2;
            number/= 2;
            
            bit31 = number % 2;
            number/= 2;
            
            bit32 = number % 2;
            number/= 2;
            
int unit_no=(bit23*1)+(bit24*2)+(bit25*4)+(bit26*8)+(bit27*16)+(bit28*32)+(bit29*64)+(bit30*128)+(bit31*256)+(bit32*512);
         cout<<"Unit number of "<<name<<" is: "<<unit_no<<endl;
            
            
	return 0;
}