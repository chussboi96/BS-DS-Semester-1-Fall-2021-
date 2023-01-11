#include<iostream>
using namespace std;
int main(){
           int a[10], b[10], j = 0;
   
         for(int i=0;i<10;i++){
          cout << "ENTER ELEMENT "<<i+1<<": ";
          cin >> a[i];  
         }
       
        for(int i=9;i>=0;i--){
          b[j] = a[i];
          j++;
    }
        cout<<endl;
        cout<<"Your reverse array is : ";
        
        for(int i=0;i<10;i++){
        cout<<b[i]<<" ";    }
        
    
    return 0;
}	