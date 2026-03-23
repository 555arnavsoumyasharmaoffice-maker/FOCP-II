/* A data analytics tool finds the maximum sales figure from multiple entries. 
Implement a solution to accept ‘n’ numbers and display the largest.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of sales figures: ";
    cin>>n;
    float sales[n], max=sales[0];
    cout<<"Enter the sales figures: ";
    for(int i=0; i<n; i++){
        cin>>sales[i];
        if(sales[i]>max){
            max=sales[i];
        }
    }
    cout<<"The maximum sales figure is: "<<max<<endl;
    return 0;
}