/*Q28. A data processing system classifies even and odd inputs separately. Implement a solution to 
store 5 elements in an array, compute sum of all even and sum of all odd numbers. */
#include<iostream>
using namespace std;
int main(){
    const int size=5;
    int arr[size];
    int even_sum=0, odd_sum=0;
    cout<<"Enter "<<size<<" numbers: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even_sum+=arr[i];
        }
        else{
            odd_sum+=arr[i];
        }
    }
    cout<<"Sum of even numbers: "<<even_sum<<endl;
    cout<<"Sum of odd numbers: "<<odd_sum<<endl;

    return 0;
}