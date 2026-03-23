/*In software applications such as data analytics and probability systems, combinatorial values are frequently 
required. To ensure efficiency, developers avoid factorial-based solutions and use iterative logic with loops. 
As a Junior Software Developer, design a C++ program to generate Pascal’s Triangle for a given number of 
rows. */
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int rows;
    cout<<"Enter the number of rows for Pascal's Triangle: ";
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}