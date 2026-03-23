/*A machine learning model multiplies matrices for neural network layers. Implement a solution 
to multiply two matrices of order m×n and p×q (if valid).*/
#include<iostream>
using namespace std;
int main(){
   int m,n,p,q;
   cout<<"Enter the order of first matrix (m n): ";
   cin>>m>>n;
   cout<<"Enter the order of second matrix (p q): ";
   cin>>p>>q;
   if(n!=p){
    cout<<"Matrix multiplication not possible. Number of columns of first matrix must be equal to number of rows of second matrix."<<endl;
    return 0;
   }
   int matrix1[m][n], matrix2[p][q], result[m][q];
   cout<<"Enter elements of first matrix:"<<endl;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>matrix1[i][j];
    }
   }
   cout<<"Enter elements of second matrix:"<<endl;
   for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cin>>matrix2[i][j];
    }
   }

   // Initialize result matrix with zeros
   for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        result[i][j]=0;
    }
   }

   // Matrix multiplication
   for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        for(int k=0;k<n;k++){
            result[i][j]+=matrix1[i][k]*matrix2[k][j];
        }
    }
   }

   cout<<"Result of matrix multiplication is:"<<endl;
   for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
   }

    return 0;
}