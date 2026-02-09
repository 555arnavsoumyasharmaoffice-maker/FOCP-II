// strings 
// check vovelss
// check consonents
// check numbers

#include<iostream>
#include<string>
using namespace std;

int main(){
   string s;
   cout<<"enter the string: "<<endl;
   getline(cin,s);
   int vovel_count=0;
   int consonent_count=0;
   int num_count=0;
   for (int i =0;i<s.length();i++){
    if (s[i]>='0' && s[i]<='9') {
        num_count++;
    }
    else if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        vovel_count++;  
    }
    else if ((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
        consonent_count++;
    }
   }

   cout<<"The count of vovels , consonet and num are : "<<vovel_count<<","<<consonent_count<<","<<num_count<<endl;


    return 0;
}