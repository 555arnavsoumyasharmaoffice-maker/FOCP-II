/*A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display: 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
 A board displays reverse seating layouts for events. Implement a solution to print: 
5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5 */
#include<iostream>
using namespace std;
int main(){
    // printing the first pattern
    cout<<"First pattern: "<<endl;
    for(int i=0; i<3; i++){
        for(int j=1; j<=5; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // printing the second pattern
    cout<<"Second pattern: "<<endl;
    for(int i=5; i>=1; i--){
        for(int j=5; j>=6-i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}