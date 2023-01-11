#i#include <iostream>
using namespace std;

int main(){
/* Share buying price = share_buying_price
   Share selling price = share_selling_price
   Broker commission = broker_com    
   com_paid_purchase= comission paid when buying
   com_paid_sell= commission paid when selling */
       
        float shares=1000, share_buying_price= 45.50,
              share_selling_price= 56.90, broker_com= 0.02,
              stock_purchase, stock_sold, com_paid_purchase,
              com_paid_sell, amount_of_profit;
              
        stock_purchase= shares * share_buying_price;
        stock_sold=    shares * share_selling_price;
        com_paid_purchase= broker_com * stock_purchase;
        com_paid_sell=    broker_com * stock_sold;
        amount_of_profit= (stock_sold - (com_paid_purchase + com_paid_sell)) -stock_purchase;
        
        cout<<"The amount of money Joe paid for the stock was $";
        cout<<stock_purchase<<"."<<endl;
        cout<<"Joe paid his broker $"<<com_paid_purchase;
        cout<<" when he bought the stock."<<endl;
        cout<<"The amount of money Joe sold the stock for was $"<<stock_sold<<"."<<endl;
        cout<<"Joe paid his broker $"<<com_paid_sell;
        cout<<" when he sold the stock."<<endl<<endl;
        
        cout<<"The amount of profit Joe made after selling his stock and ";
        cout<<"paying the 2 commissions was $"<<amount_of_profit<<"."<<endl;
        
        return 0;
        
            }