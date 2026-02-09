// A stock market app tracks first and second highest stock values. Implement a solution to find the largest 
// and second largest number in an array of size 5.
#include<iostream>
#include<climits>
using namespace std;

int main(){
   const int no_of_items= 5;
   int stock[no_of_items];
   cout<<"enter the 5 stock values: "<<endl;
   for (int i=0;i<no_of_items;i++){
    cin>>stock[i];
   }
   int max=stock[0];
   int second_max=INT_MIN;
   for (int j=1;no_of_items>j;j++){
    if (stock[j]>max){
        second_max=max;
        max=stock[j];
        
    }
    else if (stock[j]>second_max && stock[j]<max){
        second_max=stock[j];
    }
   }
    cout<<"max is: "<<max<<endl;
    cout<<"second max is: "<<second_max<<endl;
}