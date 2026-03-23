// OOPS
#include<iostream>
using namespace std;

class Car{
string brand;
int make_year;
string color;
public:
string car_type;
void display(){
    cout <<"brand of the car: "<<brand<<endl;
    cout <<"make year of the car: "<<make_year<<endl;
    cout <<"color of the car: "<<color<<endl;
    cout <<"type of the car: "<<car_type<<endl;
}
void car_entry(){
    cout<<"enter the brand of the car: "<<endl;
    cin>>brand;
    cout<<"enter the make year of the car: "<<endl;
    cin>>make_year;
    cout<<"enter the color of the car: "<<endl;
    cin>>color;
    cout<<"enter the type of the car: "<<endl;
    cin>>car_type;
}
};
int main(){
    Car c1;
    c1.car_entry();
    c1.car_type="hoch SUV";
    c1.display();
    return 0;
}