#include<iostream>
#include<limits.h>
using namespace std;
int main(){
           int i, x;
           int array[15]={1, 2, 8, 10, 10, 12, 19};
           
           cout<<"Enter the value of x: ";
           cin>>x;
            
                int cieling;
                int floor1= INT_MAX;

           for(i=0;i<15;i++){
                       if(x>= array[i]){
                       floor1 = array[i]; }
      
           if(x<= array[i]){
              cieling = array[i]; 
               break;
           }
              
}
       if(floor1 == INT_MAX)
           cout<<"Floor doesnt exist in array."<<endl;
        else
            cout<<"The Floor is : "<<floor1<<endl;
       
       if(i== 15)
            cout<<"Cieling doesnt exist in array. "<<endl;
       else
            cout<<"The cieling is : "<<cieling<<endl;
            
            
return 0;

}

