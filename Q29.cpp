// A weather monitoring app records 30-day temperature logs. Implement a solution to store daily 
// temperatures in an array and display the minimum temperature for the month.

#include<iostream>
 using namespace std;
 
 int main(){
    const int no_of_days=30;
    int temp[no_of_days];
    cout<<"enter the temperture in month of 30 days: "<<endl;
    for (int i=0;i<no_of_days;i++){
        cin>>temp[i];

    }
    int min=temp[0];
    for (int j=1;j<no_of_days;j++){
        if (min>temp[j]){
            min=temp[j];
        }
    }
    cout<<"the min is: "<<min<<endl;
 
     return 0;
 }