// smart home light system 
// create class smart light with data members brand ,brightness (0-100),isOn(true / false) 
// constructor deafalukt constructor (light off ,brightness 50)
// parametrised constructor (initialise all values )
// methods turnOn(),turnOff(),increaseBrightness(int value),decreaseBrightness(int value),displayStatus()
// destructor to print object destroyed
// crete minimum 2 objects of smart light and call all the methods to test the functionality of the class
#include<iostream>
using namespace std;
class SmartLight{
    private:
    string brand;
    int brightness;
    bool isOn;
    public:
    SmartLight();
    SmartLight(string b ,int br,bool on);
    void turnOn();
    void turnOff();
    void increaseBrightness(int value);
    void decreaseBrightness(int value);
    void displayStatus();
    ~SmartLight(){
        cout<<"object destroyed"<<endl;
    }
};
SmartLight::SmartLight(){
    brand="Generic";
    brightness=50;
    isOn=false;
}
SmartLight::SmartLight(string b ,int br,bool on){
    brand=b;
    brightness=br;
    isOn=on;
}
void SmartLight::turnOn(){
    isOn=true;
}
void SmartLight::turnOff(){
    isOn=false;
}
void SmartLight::increaseBrightness(int value){
    brightness+=value;
    SmartLight::turnOn();
    if(brightness>100){
        brightness=100;
    }
}
void SmartLight::decreaseBrightness(int value){
    brightness-=value;
    if(brightness<0){
        brightness=0;
        SmartLight::turnOff();
    }
}
void SmartLight::displayStatus(){

    cout<<"Brand: "<<brand<<endl;
    cout<<"Brightness: "<<brightness<<endl;
    cout<<"Is On: "<<(isOn?"Yes":"No")<<endl;

}
int main(){
    SmartLight light1,light2("Philips",70,true);
    light1.displayStatus();
    light1.increaseBrightness(30);
    light1.displayStatus();
    light2.displayStatus();
    light2.decreaseBrightness(20);
    light2.displayStatus();


    return 0;
}