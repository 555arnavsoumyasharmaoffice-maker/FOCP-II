/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total 
expenses and apply a discount accordingly. */
#include<iostream>
using namespace std;
int main(){
    int quantity;
    float unit_price,total_expenses,discounted_expenses;
    cout<<"Enter the quantity and unit price: ";
    cin>>quantity>>unit_price;
    total_expenses=quantity*unit_price;
    cout<<"Total expenses before discount is : "<<total_expenses<<endl;
    if(quantity>1000){
        discounted_expenses=total_expenses - (total_expenses*0.1);
        cout<<"Total expenses after 10% discount is : "<<discounted_expenses<<endl;
    }
    else{
        cout<<"No discount applied. Total expenses is : "<<total_expenses<<endl;
    }
    return 0;
}