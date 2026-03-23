/* Question of the Day!!
Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
Create a *class Candy* with the following attributes:
•	string color (stores the color of the candy)
•	int points (stores the points awarded)
The class should have the following member functions:
•	setCandy(string c, int p): Sets the color and points of the candy.
•	displayCandy(): Displays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy(). */
#include<iostream>
using namespace std;

class Candy{
  string color;
  int points;
  public:
  Candy(): color(""), points(0) {}
  void setCandy(string c, int p){
    color=c;
    points=p;
  }
  void displayCandy(){
    cout<<"Color: "<<color<<" Points: "<<points<<endl;
  }
  
};

int main(){
   
   Candy c1,c2;
   c1.setCandy("Red",10);
   c2.setCandy("Blue",20);
   c1.displayCandy();
   c2.displayCandy();

    return 0;
}