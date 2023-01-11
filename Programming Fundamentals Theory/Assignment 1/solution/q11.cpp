#include <iostream>
using namespace std;

int main(){
/* Program to find number of cups of each ingredient
   needed to make specified number of cookies.
   n= number of cookies user wants to make.     
   c= constant                                    */
           
        float c = 48, sugar = 1.5, butter = 1, flour = 2.75;
        float n, sugar_cups, butter_cups, flour_cups;
        
        cout<<"How many cookies does the user want to make?"<<endl;
        cin>>n;
        
        sugar_cups = (sugar * n)/c ;
        butter_cups= (butter * n)/c;
        flour_cups=  (flour * n)/c ;
        
        // The amount of ingredients
        cout<<"To make "<<n<<" cookies you will need :"<<endl;
        cout<<sugar_cups<<" cups of sugar are required."<<endl;
        cout<<butter_cups<<" cups of butter are required."<<endl;
        cout<<flour_cups<<" cups of flour are required."<<endl;
        
        return 0;
        
            }