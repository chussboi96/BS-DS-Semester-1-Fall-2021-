#include <iostream>
using namespace std;

double getCircleArea(float pi, double radius)
{   double area= pi * ( radius * radius );
    return area;
}

double getRectangleArea(double length, double width)
{   double area = length * width;
    return area;
}

double getTriangleArea(double base, double height)
{   double area = base * height * 0.5;
    return area;
}

int main(){
           int menu;
           double radius, length, width, base, height;
           double area;
           const float pi = 3.14159;
           
          cout<<" 1. Calculate the Area of a Cricle"<<endl;
          cout<<" 2. Calculate the Area of a Rectangle"<<endl;
          cout<<" 3. Calculate the Area of a Triangle"<<endl;
          cout<<" 4. Quit"<<endl;
          cout<<" Enter you choice (1-4): ";
          cin >> menu;
          cout<<endl;
          
         switch (menu)
{
            case 1:
                   cout<<"To calculate Area of Circle, Enter radius: ";
                   cin>>radius;
                   if(radius > 0)
        {          
                   area = getCircleArea(pi, radius);
                   cout<<"The area of cirlce is "<<area<<endl;
        }           
                   else cout<<"Invalid entry of radius. ";
                   break;
                   
            case 2:
                   cout<<"To calculate Area of Rectangle, Enter length : ";
                   cin>>length;
                   cout<<"Enter the width: ";
                   cin>>width;
                   if(length > 0 && width > 0)
        {          area = getRectangleArea(length, width);
                   cout<<"The area of rectangle is "<<area<<endl;
        }         
                   else   cout<<"Inavlid entry. "<<endl;   
                   break;
            
            case 3:
                   cout<<"To calculate Area of Trangle, Enter base : ";
                   cin>>base;
                   cout<<"Enter the height: ";
                   cin>>height;
                   if(base > 0 && height > 0)
        {          area = getTriangleArea(base, height);
                   cout<<"The area of triangle is "<<area<<endl;
        }         
                   else   cout<<"invalid entry."<<endl;       
                   break;
            
            case 4:
                   break;
                   
        default:
                cout<<"ERROR.";
}
            
    return 0;
}
