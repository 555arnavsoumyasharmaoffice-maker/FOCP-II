/*A grading system stores marks of multiple students in arrays. Implement a solution to accept 
marks in 5 subjects for 3 students, then display: 
• marks in 2nd subject of 1st student, and 
• marks in 5th subject of 3rd student. */
#include<iostream>
using namespace std;
int main(){
    const int students=3;
    const int subjects=5;
    int marks[students][subjects];
    cout<<"Enter marks for "<<students<<" students in "<<subjects<<" subjects: "<<endl;
    for(int i=0; i<students; i++){
        for(int j=0; j<subjects; j++){
            cin>>marks[i][j];
        }
    }
    cout<<"Marks in 2nd subject of 1st student: "<<marks[0][1]<<endl;
    cout<<"Marks in 5th subject of 3rd student: "<<marks[2][4]<<endl;

    return 0;
}