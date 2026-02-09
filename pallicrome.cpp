#include<iostream>
using namespace std;

int main(){
   string str;
   string result="";
   string reversed_str="";
   getline(cin,str);
   for (int i=0;i<str.length();i++){
    if (str[i]>= 'A' && str[i]<= 'Z'){
        str[i]=str[i]+32;
    }
   }
   for (int i=str.length()-1;i>=0;i--){
    if (str[i]==' ' || str[i]=='.' || str[i]==',' || str[i]=='!' || str[i]=='?' )
        continue;
    else
        result+=str[i];
   }
   for (int i=0;i<str.length();i++){
    if (str[i]==' ' || str[i]=='.' || str[i]==',' || str[i]=='!' || str[i]=='?' )
        continue;
    else
        reversed_str+=str[i];
   }
    if (result==reversed_str){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }


    return 0;
}