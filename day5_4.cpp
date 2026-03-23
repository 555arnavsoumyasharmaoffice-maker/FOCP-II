#include<iostream>
using namespace std;
void greet(string fname = "guest" ,string lname = " "){
    cout<<"welcome "<<fname<<" "<<lname<<endl;
}
int main(){
    greet();
    greet("arnav");
    greet("arnav","soumya");

    

    return 0;
}