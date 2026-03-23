#include<iostream>
using namespace std;
class nersury{
    string plant_name;
    string plant_id;
    int plant_age;
    int plant_size;
    int plant_amount;
    public:
    void plant_entries(){
        cout<<"Enter the plant name , plant id , plant age ,plant size,plant amount: "<<endl;
        getline(cin,plant_name);
        cin.ignore();
        cin>>plant_id>>plant_age>>plant_size>>plant_amount;

    }
};
int main(){
   

    return 0;
}