#include<iostream>
using namespace std;

class Student{
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;

public:

    Student(int r, string n, int m1, int m2, int m3){
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    int calculate_Total(){
        return (marks1 + marks2 + marks3);
    }

    void display_Details(){
        cout<<"Roll no: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks1<<" "<<marks2<<" "<<marks3<<endl;
    }
};

