#include<iostream>
using namespace std;
void swap(int *a,int *b);
void swap(float *c,float *d);
int main(){
    int a,b;
    float c,d;
   cout<<"enter the value of integer(a,b) and float(c,d) : "<<endl;
   cin>>a>>b>>c>>d;
   swap(&a,&b);
   swap(&c,&d);

    return 0;
}
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    cout<<"the value of integer : a= "<<*a<<","<<"b = "<<*b<<endl;

}
void swap(float *c,float *d){
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    cout<<"the value of float : c= "<<*c<<","<<"d = "<<*d<<endl;
}