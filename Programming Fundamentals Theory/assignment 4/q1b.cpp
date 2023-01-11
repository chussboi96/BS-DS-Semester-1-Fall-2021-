#include <iostream>
using namespace std;
int main(){
             int i, j, space;
  
      for(i= 1; i<= 5; i++)
{       for(space= 5; space> i; space--)
        cout<<" ";
    
        for(j= i; j< (i*2)-1; j++)
          cout<<j;
    
        for(j= (i*2)-1; j>= i; j--)
          cout<<j;
    
    cout<<endl;
}

        for(i = 4; i >= 1; i--)
{      for(space = 1; space < 6-i; space++)
         cout << " ";
     
      for(int k = i; k <= (2 * i)-1; k++)
         cout<<k;

      for(int l=(2 * i)-2;l>= i; l--)
	 cout<<l;		

      cout<<endl;
}
           
    return 0;
}
