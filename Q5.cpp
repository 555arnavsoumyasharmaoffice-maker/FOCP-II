// A student wants to swap the values of two variables for practising coding basics. 
//Implement a solution to swap two numbers using different techniques. 
#include<iostream>
using namespace std;

int main(){
   int a,b;
   cout<<"Enter two numbers to be swapped: ";
   cin>>a>>b;
   cout<<"Before swapping a="<<a<<" b="<<b<<endl;
   // swapping using. bitwise 
   a=a^b;
   b=a^b;
   a=a^b;   
   cout<<"After swapping using bitwise a= "<<a<<"b= "<<b<<endl;
   // swapping using third variable
   int t;
   t=a;
   a=b;
   b=t;
   cout<<"After swapping using third variable a= "<<a<<"b= "<<b<<endl;
   // using arthmetic operateor 
   a=a+b;
   b=b-a;
   a=a+b;
   cout<<"after swapping using arthmetic operator a= "<<a<<"b= "<<b<<endl;
   // using std::swap
   swap(a,b);
   cout<<"after swapping using std::swap a= "<<a<<"b= "<<b<<endl;
    return 0;
}