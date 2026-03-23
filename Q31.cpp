/* A manufacturing QC system checks defect codes divisible by both 3 and 5. 
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5. */
#include<iostream>
using namespace std;
int main(){
    const int size=5;
    int arr[size];
    int count=0;
    cout<<"Enter "<<size<<" defect codes: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
        if(arr[i]%3==0 && arr[i]%5==0){
            count++;
        }
    }
    cout<<"Number of defect codes divisible by both 3 and 5: "<<count<<endl;

    return 0;
}