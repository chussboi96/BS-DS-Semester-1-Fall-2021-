#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int size;
    char capital[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int letters[27] = {0};
    string input;
    cout << "Enter any text: ";
    getline(cin, input);
    //converting small text into capital
    for (int i = 0; (input[i] != '\0'); i++)
{
        if ( (input[i] != ' ') || (input[i] != '\0') ) 
        {
            if ( (input[i] >= 97) && (input[i] <= 122) )
                 input[i] = input[i] - 32;
        }
}
    cout<<"In captial letters: ";
    for(int i= 0; input[i] != '\0'; i++)
        cout<<input[i];
    
    cout<<endl<<endl;
    
    for(int i = 0; input[i] != '\0'; i++)
{
        for(int j = 0; j < 27; j++)
        {
            if(input[i] == capital[j])
                ++letters[j];
        }
}

    for(int i = 0; i < 27; i++)
{
        if(letters[i] != 0){
            cout << capital[i] << ":  \t" << letters[i]<<endl;
        }
}
    return 0;
}
