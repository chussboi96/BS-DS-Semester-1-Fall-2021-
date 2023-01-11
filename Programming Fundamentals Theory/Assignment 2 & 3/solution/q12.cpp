#include <iostream>
using namespace std;
int main(){
         /* Hardness must be greater than 50
            Carbon content must be less than 0.7
            Tensile strength must be greater than 5600 */
          
         int hardness, tensile_strength;
         double carbon_content;
         
         cout<<"Enter the value of hardness: ";
         cin>>hardness;
         cout<<"Enter the value of carbon content: ";
         cin>>carbon_content;
         cout<<"Enter the value of tensile strength: ";
         cin>>tensile_strength;
         
         if(hardness> 50 && carbon_content<0.70 && tensile_strength> 5600){
           cout<<"The steel is of grade 10."<<endl;                               }
           else if (hardness> 50 && carbon_content< 0.7){
               cout<<"The steel is of grade 9. "<<endl;     }
               else if(carbon_content< 0.7 && tensile_strength>5600){
                   cout<<"The steel is of grade 8. "<<endl;           }
                   else if(hardness> 50 && tensile_strength> 5600){
                       cout<<"The steel is of grade 7. "<<endl;     }
            else if(hardness> 50 && !(carbon_content< 0.7) && !(tensile_strength> 5600))
                     cout<<"The steel is of grade 6. "<<endl;
            else if(!(hardness> 50) && carbon_content< 0.7 && !(tensile_strength> 5600))
                     cout<<"The steel is of grade 6. "<<endl;
            else if(!(hardness> 50) && !(carbon_content< 0.7) && tensile_strength> 5600)
                     cout<<"The steel is of grade 6. "<<endl;
            
            else cout<<"The steel is of grade 5. "<<endl;
         
    return 0;
}
