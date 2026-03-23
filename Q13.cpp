/*A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
solution to calculate the roots of a quadratic equation*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,discriminant,root1,root2;
    cout<<"Enter the coefficients a, b and c of the quadratic equation ax^2 + bx + c = 0: ";
    cin>>a>>b>>c;
    discriminant=b*b - 4*a*c;
    if(discriminant>0){
        root1=(-b + sqrt(discriminant))/(2*a);
        root2=(-b - sqrt(discriminant))/(2*a);
        cout<<"The roots are real and different."<<endl;
        cout<<"Root 1: "<<root1<<endl;
        cout<<"Root 2: "<<root2<<endl;
    }
    else if(discriminant==0){
        root1=root2=-b/(2*a);
        cout<<"The roots are real and equal."<<endl;
        cout<<"Root: "<<root1<<endl;
    }
    else{
        float realPart=-b/(2*a);
        float imaginaryPart=sqrt(-discriminant)/(2*a);
        cout<<"The roots are complex and different."<<endl;
        cout<<"Root 1: "<<realPart<<" + "<<imaginaryPart<<"i"<<endl;
        cout<<"Root 2: "<<realPart<<" - "<<imaginaryPart<<"i"<<endl;
    }
    return 0;
}