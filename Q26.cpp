// Q26. The school report card system stores subject marks for each student. 
//Implement a solution to accept marks in 5 subjects, compute the total and percentage,
// and display the result.

#include<iostream>
using namespace std;

int main(){
    const int no_of_subjects=5;
    int marks[no_of_subjects];
    int total=0;
    float percentage;
    cout<<"enter marks of "<<no_of_subjects<<" subjects:"<<endl;
    for (int i=0;i<no_of_subjects;i++){
        cin>>marks[i];
        total+=marks[i];
    }
    percentage=(total/(no_of_subjects*100.0)*100);
    cout<<"total marks:"<<total<<endl;
    cout<<"percentage:"<<percentage<<"%"<<endl;

    return 0;
}