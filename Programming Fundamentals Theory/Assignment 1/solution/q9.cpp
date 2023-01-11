#include <iostream>
using namespace std;

int main(){ 
// Program to calculate values of algebraic expressions
        
        double a, b, c, g, h, k, x, y, z;
        
        // To calculate a
        cout<<"Enter the value of x : ";
        cin>> x;
        a= 12*x;
        cout<<"The value of a is "<<a<<endl<<endl;
        
        // To calculate z
        cout<<"Enter the value of x : ";
        cin>> x;
        cout<<"Enter the value of y : ";
        cin>> y;
        cout<<"Enter the value of k : ";
        cin>> k;
        z= 5*x + 14*y + 6*k;
        cout<<"The value of z is "<<z<<endl<<endl;
        
        // To calculate y
        cout<<"Enter the value of x : ";
        cin>> x;
        y = (x*x*x*x);
        cout<<"The value of y is "<<y<<endl<<endl;
        
        // To calculate g
        cout<<"Enter the value of h : ";
        cin>> h;
        cout<<"Enter the value of k : ";
        cin>> k;
        g= (h+12)/(4*k);
        cout<<"The value of g is "<<g<<endl<<endl;
        
        // To calculate c
        cout<<"Enter the value of a : ";
        cin>> a;
        cout<<"Enter the value of b : ";
        cin>> b;
        cout<<"Enter the value of k : ";
        cin>> k;
        c= (a*a*a)/((b*b)*(k*k*k*k));
        cout<<"The value of c is "<<c<<endl;
        
        return 0;
            }