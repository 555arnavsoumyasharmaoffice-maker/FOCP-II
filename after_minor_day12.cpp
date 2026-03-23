#include<iostream>
using namespace std;
class A{
    int a1;
    int a2;
    public:
    A()
    {
        a1 = 0;
        a2 = 0;
    }
    A(int a1,int a2){
        this->a1 = a1;
        this->a2 = a2;
    }
    A(int a1){
        (*this).a1 = a1;  // this is a pointer to the current object and we can use it to access the members of the class
        this->a2 = 0;  // this is a pointer to the current object and we can use it to access the members of the class
    }
    void display(){
        cout<<"a1 = "<<a1<<" a2 = "<<a2<<endl;
    }
};
int main(){
   A obj1,obj2(10,20),obj3(30);
   obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}