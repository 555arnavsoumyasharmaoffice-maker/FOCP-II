// An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
//Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
//display results.
#include<iostream>
using namespace std;
int main(){
   int num_employees;
   float basic_salary,bonus,net_salary;
   cout<<"Enter the number of employees: ";
   cin>>num_employees;
   for(int i=0;i<num_employees;i++){
    cout<<"Enter basic salary for employee "<<i+1<<": ";
    cin>>basic_salary;
    bonus=basic_salary*0.12;
    net_salary=basic_salary+bonus;
    cout<<"Bonus for employee "<<i+1<<" is: "<<bonus<<endl;
    cout<<"Net salary for employee "<<i+1<<" is: "<<net_salary<<endl;
   }
    return 0;
}