/*Q24. A typing practice app displays the alphabets in pyramid form. Implement a solution to display: 
A 
AB 
ABC 
ABCD 
ABCDE*/
#include<iostream>
using namespace std;
int main(){
    int n=5; // number of rows
    for(int i=1; i<=n; i++){
        for(char j='A'; j<'A'+i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}