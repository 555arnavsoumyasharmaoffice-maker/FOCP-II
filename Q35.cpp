/*A data analytics tool flips rows and columns for better visualization. Implement a solution to 
store a 3×3 matrix and compute its transpose. */
#include<iostream>
using namespace std;
int main(){
   int matrix[3][3];
   int transpose[3][3];
   cout<<"enter the elements of 3x3 matrix:"<<endl;
   for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        cin>>matrix[i][j];

    }
   }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    cout<<"Transpose of the matrix is:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}