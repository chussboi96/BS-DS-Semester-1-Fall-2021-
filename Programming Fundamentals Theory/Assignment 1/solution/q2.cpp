#include <iostream>
using namespace std;

int main() 
       {
       /* Credit card wallet application
          Mc = maximum credit, Uc = credit used by customer
          Rc = remaining credit                          */
        
        long int Mc, Uc;
        long int Rc;
        
        cout<<"Enter the maximum credit limit : $";
        cin>>Mc;
        cout<<"The maximum credit limit is : $"<<Mc<<endl;
        cout<<"The credit used by the customer is : $";
        cin>>Uc;
        // Uc= credit used by the customer
        
        Rc=Mc-Uc;
        if(Rc>=0){
        cout<<"The remaining credit is : $"<<Rc<<endl;
        }
        else { cout<<"INVALID ENTRY"<<endl;}
      
        return 0;
        }
