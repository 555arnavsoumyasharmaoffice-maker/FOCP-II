// create a function that multiplies for two nubers three numbers and two double
#include<iostream>
using namespace std;
int mul(int a,int b,int c);
double mul(double a,double b);
int main(){
   int a,b,c;
   double x,y;
   cout<<"enter the value of a,b,c and x,y: "<<endl;
   cin>>a>>b>>c>>x>>y;
   cout<<"multiplication of two integers: "<<mul(a,b)<<endl;
   cout<<"multiplication of three integers: "<<mul(a,b,c)<<endl;
   cout<<"multiplication of two doubles: "<<mul(x,y)<<endl;

    return 0;
}
int mul(int a,int b,int c=1){
    return a*b*c;
}
double mul(double a,double b){
    return a*b;
}