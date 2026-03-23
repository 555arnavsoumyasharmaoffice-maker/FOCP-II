
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(): accountHolderName(""), accountNumber(0), balance(0.0) {}

    void inputDetails();
    void displayDetails() const;
    void deposit(double amount);
    void withdraw(double amount);
};

void BankAccount::inputDetails() {
    cout << "Enter the Account Holder Name: ";
    cin >> accountHolderName;
    cout << "Enter the Account Number: ";
    cin >> accountNumber;
    cout << "Enter the initial balance: ";
    cin >> balance;

    cout << "Enter the choice\n1) deposit\n2) withdraw\n";
    int c;
    cin >> c;
    if (c == 1) {
        double amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        deposit(amt);
    } else if (c == 2) {
        double amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        withdraw(amt);
    } else {
        cout << "Invalid choice\n";
    }
}

void BankAccount::displayDetails() const {
    cout << "\nAccount Holder: " << accountHolderName << '\n'
         << "Account Number: " << accountNumber << '\n'
         << "Balance: " << balance << '\n';
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited " << amount << ". New balance: " << balance << '\n';
    } else {
        cout << "Invalid deposit amount\n";
    }
}

void BankAccount::withdraw(double amount) {
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance: " << balance << '\n';
        } else {
            cout << "Insufficient funds\n";
        }
    } else {
        cout << "Invalid withdraw amount\n";
    }
}

int main() {
    BankAccount acc;
    acc.inputDetails();
    acc.displayDetails();
    return 0;
}