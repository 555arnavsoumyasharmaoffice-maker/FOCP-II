// A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to 
//convert Fahrenheit temperature into Centigrade or vice versa. 

#include<iostream>
using namespace std;

int main(){
   int f,c;
   cout<<"Enter temperature in farenhiet: ";
   cin>>f;
   c=(f-32)*5/9;
   cout<<"Temperature in centigrate is : "<<c<<endl;
   cout<<"Enter temperature in centegrate: ";
   cin>>c;
   f=(c*9/5)+32;
   cout<<"Temperature in farenhiet is : "<<f<<endl;

    return 0;
}