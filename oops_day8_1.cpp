#include<iostream>
using namespace std;


class rectangle{
  float length;
  float breadth;
  public:
  void inputDimensions(){
    cout<<"Enter the length and breadth of rectangle: "<<endl;
    cin>>length>>breadth;

  }
  float calculateArea(){
    return (length*breadth);
  }
  float calculatePerimeter(){
    return (2*(length+breadth));
  }

};
int main(){
   rectangle r;
   r.inputDimensions();
   float a=r.calculateArea();
   float p=r.calculatePerimeter();
   cout<<"the area and perimeter are - "<<a<<"  and  "<<p<<endl;

    return 0;
}