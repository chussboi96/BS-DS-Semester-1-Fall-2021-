#include <iostream>
using namespace std;
int main(){
            int sum;
            int original[8]= {1, 5, 7, 5, 8, 9, 11, 12};
            
            cout<<"Enter the number whose sum pairs you want to find:"<<endl;
            cin>>sum;
            
        for(int i=0; i< 7; i++){
           for(int j=i+1; j< 8; j++)
                if((original[i]+original[j]) == sum){
                    
                 cout<<original[i]<<", "<<original[j]<<endl;       }
        }
            
            
            
            
            

    return 0;
}
