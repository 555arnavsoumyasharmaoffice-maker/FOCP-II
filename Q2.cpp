#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Hello, "<<name<<"!"<<endl;

    int num1,num2,num3;
    cout<<"Enter three marks: ";
    cin>>num1>>num2>>num3;
    int sum = num1 +num2+num3;
    cout<<"three marks are: "<<num1<<","<<num2<<","<<num3<<endl;
    cout<<"The sum of three marks is: "<<sum<<endl;
    cout<<"The average of three marks is: "<<sum/3<<endl;
    return 0;
}