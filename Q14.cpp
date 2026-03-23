/* Develop a menu-driven calculator program in C++ to perform basic arithmetic operations. 
The program should continue executing based on the user's choice and display the result of each operation.*/
#include<iostream>
using namespace std;
int main(){
    int choice;
    float num1,num2,result;
    do{
        cout<<"Menu: "<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice>=1 && choice<=4){
            cout<<"Enter two numbers: ";
            cin>>num1>>num2;
        }
        switch(choice){
            case 1:
                result=num1+num2;
                cout<<"Result: "<<result<<endl;
                break;
            case 2:
                result=num1-num2;
                cout<<"Result: "<<result<<endl;
                break;
            case 3:
                result=num1*num2;
                cout<<"Result: "<<result<<endl;
                break;
            case 4:
                if(num2!=0){
                    result=num1/num2;
                    cout<<"Result: "<<result<<endl;
                }
                else{
                    cout<<"Error: Division by zero is not allowed."<<endl;
                }
                break;
            case 5:
                cout<<"Exiting the program."<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }while(choice!=5);
    return 0;

}