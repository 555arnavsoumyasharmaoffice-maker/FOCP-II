// A shopkeeper wants to calculate the total bill amount after applying a 20% discount 
//on the purchase. 
// Implement a solution
// to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.
#include<iostream>
using namespace std;

int main(){
   int item_no,quantity,unit_price,total_amount;
   float discounted_amount;
   cout<<"Enter the item no: quantity and unit price: ";
   cin>>item_no>>quantity>>unit_price;
   total_amount=quantity*unit_price;
   cout<<"Total amount before discount is : "<<total_amount<<endl;
   discounted_amount=total_amount - (total_amount*0.2);
   cout<<"Total amount after 20% discount is : "<<discounted_amount<<endl;


    return 0;
}