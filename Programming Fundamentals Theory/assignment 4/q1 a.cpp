#include <iostream>
using namespace std;
int part_a(int i, int j){
    
	while(i < 8)
{
            while(j <= 30){
            
                if(j== 1 || j== 8 || j== 30)
                    cout<<"|";
                
            else if ((j==16 || j==17 || j==18 || j==23 ) && i==2)
              cout<<"*";
                
                else if((j==16 || j==15 || j==21 || j==23 || j==25 ) && i==3)
                    cout<<"*";
    
            else if((j==14 || j==15 || j==21 || j==25 ) && i==4)
              cout<<"*";
                
                else if ((j==16 || j==15 ) && i==5)
                    cout<<"*";
                
            else if((j==18 || j==17 || j==19) && i==6)
              cout<<"*";
                
                else cout<<"."; 
               
            j++;        } 
            
        cout<<endl;
        j = 1;
        i++;
}

    
}
int main(){
             int i= 1, j= 1;
   
    part_a(1,1);
    return 0;
}
