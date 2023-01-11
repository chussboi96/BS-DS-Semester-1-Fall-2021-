#include <iostream>
using namespace std;
void TIKKAFUNC(int TIKKAs)
{
    int remaining, notes_of_500, notes_of_100, notes_of_50;
    int notes_of_20, notes_of_10,notes_of_5, notes_of_1;
         
         cout<<"Currency Note       :Number"<<endl;
         
         if (TIKKAs >= 1){
            notes_of_500 = TIKKAs/500;
            cout<<"500                 :"<<notes_of_500<<endl;
            remaining = TIKKAs%500;
            
            notes_of_100 = remaining/100;
            cout<<"100                 :"<<notes_of_100<<endl;
            remaining = remaining%100;
            
            notes_of_50 = remaining/50;
            cout<<"50                 :"<<notes_of_50<<endl;
            remaining = remaining%50;
            
            notes_of_10 = remaining/10;
            cout<<"10                  :"<<notes_of_10<<endl;
            remaining = remaining%10;
            
            notes_of_5 = remaining/5;
            cout<<"5                  :"<<notes_of_5<<endl;
            remaining = remaining%5;
            
            notes_of_1 = remaining/1;
            cout<<"1                   :"<<notes_of_1<<endl;
            
         }
         
         else cout<<"Invalid input";
}
         
         
         
int main(){
         int TIKKAs;
         cout<<"Enter the amount of Tikka's : ";
         cin>>TIKKAs;
         TIKKAFUNC(TIKKAs);
  
   return 0;
}
