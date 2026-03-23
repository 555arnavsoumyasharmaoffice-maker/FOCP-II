/*A payroll system maintains employee salary records. Implement a solution to accept salary of 
10 employees in an array, compute total salary and average salary, then display the result. */
#include<iostream>
using namespace std;
int main(){
    const int size=10;
    double salaries[size];
    double total=0;
    cout<<"Enter salaries of "<<size<<" employees: "<<endl;
    for(int i=0; i<size; i++){
        cin>>salaries[i];
        total+=salaries[i];
    }
    double average=total/size;
    cout<<"Total salary: "<<total<<endl;
    cout<<"Average salary: "<<average<<endl;
    return 0;
}