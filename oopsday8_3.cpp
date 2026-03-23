#include<iostream>
using namespace std;


class rectangle{
  float length;
  float breadth;
  public:
rectangle(){
  length=0;
  breadth=4;
}

rectangle(float l, float b){
  length=l;
  breadth=b;
}

/* void inputDimensions(){
  cout<<"Enter the length and breadth of rectangle: "<<endl;
  cin>>length>>breadth;
}*/
float calculateArea(){
    return (length*breadth);
  }
  float calculatePerimeter(){
    return (2*(length+breadth));
  }

};
int main(){
   rectangle r;
//   r.inputDimensions();
   float a=r.calculateArea();
   float p=r.calculatePerimeter();
   cout<<"the area and perimeter are - "<<a<<"  and  "<<p<<endl;

   rectangle r2(53,23);
//   r2.inputDimensions();
   float a2=r2.calculateArea();
   float p2=r2.calculatePerimeter();
   cout<<"the area and perimeter are - "<<a2<<"  and  "<<p2<<endl;

    return 0;
}