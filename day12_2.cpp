#include<iostream>
using namespace std;
class person{
    string name;
    int age;
public:
person(){
    cout<<"person default constructor called"<<endl;
    name="Guest"; age=0;}
person(string n,int a){
    name=n; age=a;
cout<<"person parameterized constructor called"<<endl;
}
void display(){
    cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;}
};
class student:public person{
    string roll;
    public:
    student():person(){
        cout<<"student default constructor called"<<endl;
        roll="0000";
    }
    student(string n,int a,string r):person(n,a){
        roll=r;
        cout<<"student parameterized constructor called"<<endl;
    }
    void display_student(){
        display();
        cout<<"Roll: "<<roll<<endl;
    }
};
int main(){
    student  a,s("Arnav", 18, "25csu037");
    a.display_student();
    s.display_student();

    return 0;
}