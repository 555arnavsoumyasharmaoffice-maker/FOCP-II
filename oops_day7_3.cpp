#include<iostream>
using namespace std;
class Student{
    string name;
    int roll_no;
    int marks[3];
    public:
    void student_input(){
        cout<<"enter the name of the student: "<<endl;
        cin>>name;
        cout<<"enter the roll number of the student: "<<endl;
        cin>>roll_no;
    }
    void display_result(){
        cout<<"marks of 3 subjects: "<<endl;
        for(int i=0;i<3;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
    void marks_entry(){
        cout<<"enter the marks of 3 subjects: "<<endl;
        for(int i=0;i<3;i++){
            cin>>marks[i];
        }
    }
    void Student_details(){
        cout<<"name of the student: "<<name<<endl;
        cout<<"roll number of the student: "<<roll_no<<endl;
    }
    
};
int main(){
    Student s1;
    s1.student_input();
    s1.marks_entry();
    s1.Student_details();
    s1.display_result();

    return 0;
}