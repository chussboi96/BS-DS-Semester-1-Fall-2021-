#include <iostream>
using namespace std;
int main(){

  int first, second, bool prime = true;

  cout<<"Enter two numbers (the intervals): ";
  cin>>first>>second;

  cout<<endl<<"Prime numbers between "<<first<<" & "<<second <<" are: "<<endl;

  while (first < second) {
    prime = true;

    if (first== 0 || first == 1)
      prime = false;
    
 
    for (int i= 2; i<= first/2; ++i) {
      if (first % i == 0) {
        prime = false;
        break;
      }
    }
        
    if (prime)
      cout<<first<< ", ";

    ++first;
  }

  return 0;
}
