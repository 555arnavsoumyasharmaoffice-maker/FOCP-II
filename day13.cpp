/**Question of the day!!*
Create a class Account with account number and balance. Add a function displayAccount(). Derive a class SavingsAccount
 that includes interest rate and a function calculateInterest(). Demonstrate usage of both classes.*/

 #include<iostream>
 using namespace std;
 class Account{
    protected: // we want to inherit but don't want to change it globally
    int accountNumber;
    double balance;
    public:
    Account(){
        accountNumber=0;
        balance=0.0;
    }
    Account(int accNum,double bal){
        accountNumber=accNum;
        balance=bal;

    }
    void displayAccount(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"balance: "<<balance<<endl;
    }
 };
 class SavingsAccount: public Account{
    double interest_rate;
    public:
    SavingsAccount():Account(){
        interest_rate=0.0;
    }
    SavingsAccount(int accNum,double bal,double rate):Account(accNum,bal){
        interest_rate=rate;
    }
    void calculateInterest(){
        double interest=(balance*interest_rate)/100;
        cout<<"Interest: "<<interest<<endl;
        displaySavings();
    }
    void displaySavings(){
        displayAccount();
        cout<<"interest rate: "<<interest_rate<<"%"<<endl;
    }
 };
 int main(){
    SavingsAccount sa(12345,1000,0.5),sa2;
    sa.calculateInterest();
    sa2.calculateInterest();
     return 0;
 }