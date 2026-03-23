// functions and polymorphism
#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
double sum(double,double);
int main(){
    int s=sum(100,100);
    float s1= sum(4.1,4.6);
    double s2 = sum(4.0001,5.0001);
    cout<<"The sum of int,float,doubles are "<<s <<endl<<s1<<endl<<s2;


    return 0;
}
int sum(int a,int b){
    int s=a+b;

return s;

}
float sum(float a,float b){
    float s=a+b;

return s;

}
double sum(double a,double b){
    double s=a+b;

return s;

}