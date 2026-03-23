#include<iostream>
using namespace std;


void swap(int *a,int *b);
void swap(int &a , int &b);
int main(){
   int a,b;
   cout<<"Enter the values a: b: "<<endl;
   cin>>a>>b;
   swap(&a,&b);
   int p,q;
   cout<<"Enter the values p: q: "<<endl;
   cin>>p>>q;
   swap(p,q);


    return 0;
}
void swap(int *a,int *b){
    cout<<"swapping by call by address : "<<endl;
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    cout<<"swapping is done by call by address: a= "<<*a<<"and b= "<<*b<<endl;
}
void swap(int &x, int &y){
    cout<<"swapping by call by reference : "<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"swapping is done by call by reference: p= " <<x<<" and q= "<<y<<endl;
}


