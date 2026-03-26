#include<iostream>
using namespace std;
class Acadamic{
int marks;
public:
Acadamic(){
    marks=0;
}
Acadamic(int marks){
    this->marks=marks;
}
void display_marks(){
    cout<<"The marks are: - "<<marks<<endl;
}
};
class Sports{
    int score;
public:
    Sports(){
        score=0;
    }
    Sports(int s){
        score=s;
    }
    void display_sports(){
        cout<<"The Sports: - "<<score<<endl;

    }
};
class result:public Acadamic,public Sports{
public:
result():Acadamic(),Sports(){
}
    result(int m,int s):Acadamic(m),Sports(s){
    }
    void display_result(){
        cout<<"The result is : "<<endl;
        display_marks();
        display_sports();
    }
};

int main(){
   result r1,r(85,90);
    r1.display_result();
    r.display_result();

    return 0;
}