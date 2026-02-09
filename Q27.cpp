// A supermarket software maintains item price lists. Implement a solution to store the prices of 10 
//items in an array and display the maximum price.
 #include<iostream>
 using namespace std;
 
 int main(){
    const int no_of_items=10;
    int price[no_of_items];
    cout<<"enter the price of 10 items: "<<endl;
    for (int i=0;i<no_of_items;i++){
        cin>>price[i];

    }
    int max=price[0];
    for (int j=1;j<no_of_items;j++){
        if (max<price[j]){
            max=price[j];
        }
    }
    cout<<"the max is: "<<max<<endl;
 
     return 0;
 }