// functions and polymorphism
#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
double sum(double,double);
int main(){
    int a, b;
    float c, d;
    double e, f;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    int s = sum(a, b);
    
    cout << "Enter two floats: ";
    cin >> c >> d;
    float s1 = sum(c, d);
    
    cout << "Enter two doubles: ";
    cin >> e >> f;
    double s2 = sum(e, f);
    
    cout << "The sum of int,float,doubles are " << s << endl << s1 << endl << s2;
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