// polymorphism but with defautt parameters 

#include<iostream>
using namespace std;
int sum(int ,int ,int=0,int=0,int=0,int=0 );
int main(){
   int a,b,c,d,e,f;
   cout << "enter th e6 intergers: "<<endl;
   cin>>a>>b>>c>>d>>e>>f;
   int s=sum(a,b,c,d,e,f);
   cout<<"sum is "<<s<<endl;
    return 0;
}
int sum(int a ,int b,int c,int d,int e,int f ){
    return(a+b+c+d+e+f);
}
