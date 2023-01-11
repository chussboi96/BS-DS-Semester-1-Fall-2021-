#include <iostream>
using namespace std;
int main(){
             int x, a[10];

          cout<<"Enter any 10 numbers in array: ";
           for(int i= 0; i< 10; i++){
           cin>>a[i];       
           cout<<" ";                }

         for(int i= 0; i< 10; i++){
            for(int j= i+1; j < 10; j++){
               if(a[i]> a[j]){
                   x = a[i];
                  a[i] = a[j];
                  a[j] = x;
                                  }
                                         }
                              }
                                      
           cout<<"Data after sorting: ";
            for(int i= 0; i< 10; i++){
             cout<<a[i]<<" ";           }
                  
    return 0;
}
            
 