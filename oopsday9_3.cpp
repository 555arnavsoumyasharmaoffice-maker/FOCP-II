/* Question of the Day!!
Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
Create a *class Candy* with the following attributes:
•	string color (stores the color of the candy)
•	int points (stores the points awarded)
The class should have the following member functions:
•	setCandy(string c, int p): Sets the color and points of the candy.
•	displayCandy(): Displays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy(). 
replace set cndy funcytion with constructor */
#include<iostream>
using namespace std;

class Candy{
  string color;
  int points;
  public:
  Candy(string c, int p){
    color=c;
    points=p;
  }
  void loose_points(int p);
  void gain_points(int p);
  void displayCandy();
  
};
void Candy::displayCandy(){
    cout<<"Color: "<<color<<" Points: "<<points<<endl;
  }
void Candy::loose_points(int p){
    points-=p;
}
void Candy::gain_points(int p){
    points+=p;
}

int main(){
   
   Candy c1("Red",10),c2("Blue",20);
   c1.displayCandy();
   c2.displayCandy();
   Candy c3("Green",15);
   c3.displayCandy();
   c1.loose_points(5);
   c1.displayCandy();
   c3.gain_points(10);
   c3.displayCandy();

    return 0;
}