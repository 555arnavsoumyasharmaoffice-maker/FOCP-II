// make password which checks that whether it is a strong passwpord or not
#include<iostream>
using namespace std;

int main(){
   string password;
   cout<<"Enter your password: "<<endl;
   getline(cin,password);
   int vovel_count=0;
   int consonent_count=0;
   int num_count=0;
   int special_character_count=0;
   for(int i=0;i<password.length();i++){
    if ((password[i]>='a' && password[i]<='z') || (password[i]>='A' && password[i]<='Z')){
        if(password[i]=='a' || password[i]=='e' || password[i]=='i' || password[i]=='o' || password[i]=='u' || password[i]=='A' || password[i]=='E' || password[i]=='I' || password[i]=='O' || password[i]=='U'){
            vovel_count++;
        }
        else{
            consonent_count++;
        }
    }
    else if(password[i]>='0' && password[i]<='9'){
        num_count++;
    }
    else{
        special_character_count++;
    } 
   }
   if (special_character_count>=1)


    return 0;
}