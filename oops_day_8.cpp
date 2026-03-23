#include<iostream>
using namespace std;

class Student{
    int rollNo;
    string name;
    int marks1;
    int marks2;
    int marks3;
    public:
    void input_details();
    int calculate_Total();
    void disply_Details();

    void Student::input_details(){ // setter function
        cout<<"Enter the roll no: "<<endl;
        cin>>rollNo;
        cout<<"Enter the name of the student :"<<endl;
        cin>>name;
        cout<<"Enter the marks in 3 subjects: "<<endl;
        cin>>marks1>>marks2>>marks3;
    }
    int Student::calculate_Total(){ // getter functions 
        return (marks1+marks2+marks3);
    }
    void Student::disply_Details(){ // getter functions
        cout<<"Roll no of the student : "<<rollNo<<endl;
        cout<<"Name of the student : "<<name <<endl;
        cout<<"Marks in subjects 1,2,3 are - "<<marks1<<" "<<marks2<<" "<<marks3<<endl;
    }
};
int main(){
   

    Student s1;
    cout<<"The details of first student: "<<endl;
    s1.input_details();
    cout<<"Total marks of the student1 : "<<s1.calculate_Total()<<endl;
    s1.disply_Details();

    Student S2;
    cout<<endl;
    cout<<"The details of second student: "<<endl;
    S2.input_details();
    cout<<"Total marks of the student2 : "<<S2.calculate_Total()<<endl;
    S2.disply_Details();

    return 0;
}