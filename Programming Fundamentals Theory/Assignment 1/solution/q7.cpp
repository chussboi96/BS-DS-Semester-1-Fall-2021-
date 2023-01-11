#include <iostream>
using namespace std;

int main(){
// The current ocean level = current. Ocean level after 5 years= level5
// Ocean level after 7 years= level7. Ocean level after 10 years= level 10      
           
        long int level5, level7, level10 ;
        
        cout<<"Enter the ocean level after 5 years : ";
        cin>>level5;
        cout<<"The ocean level will be "<<1.5*level5<<" millimeters higher after 5 years."<<endl<<endl;
        
        cout<<"Enter the ocean level after 7 years : ";
        cin>>level7;
        cout<<"The ocean level will be "<<1.5*level7<<" millimeters higher after 7 years."<<endl<<endl;
        
        cout<<"Enter the ocean level after 10 years : ";
        cin>> level10;
        cout<<"The ocean level will be "<<1.5*level10<<" millimeters higher after 10 years."<<endl;
        
        return 0;
        
            }