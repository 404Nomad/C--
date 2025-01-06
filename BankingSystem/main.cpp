#include <iostream>
#include <vector>
#include <fstream>
#include "Account.h"

using namespace std;

// commande pour  compiler le programme
 // $ g++ main.cpp Account.cpp -o main

// Functions
void createAccount(vector<Account>& accounts);
void depositToAccount(vector<Account>& accounts);
void withdrawFromAccount(vector<Account>& accounts);
void displayAccountDetails(const vector<Account>& accounts);

// Helper function
Account* findAccount(vector<Account>& accounts, int accountNumber);

int main() {
    vector<Account> accounts;
    int choice;

    do {
        cout << "\n=== Banking System ===\n";
        cout << "1. Create New Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(accounts); break;
            case 2: depositToAccount(accounts); break;
            case 3: withdrawFromAccount(accounts); break;
            case 4: displayAccountDetails(accounts); break;
            case 5: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

void createAccount(vector<Account>& accounts) {
    string name;
    int accountNumber;
    double initialBalance;

    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    accounts.emplace_back(name, accountNumber, initialBalance);
    cout << "Account created successfully!\n";
}

void depositToAccount(vector<Account>& accounts) {
    int accountNumber;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    Account* account = findAccount(accounts, accountNumber);
    if (account) {
        cout << "Enter Amount to Deposit: ";
        cin >> amount;
        account->deposit(amount);
        cout << "Deposit successful!\n";
    } else {
        cout << "Account not found.\n";
    }
}

void withdrawFromAccount(vector<Account>& accounts) {
    int accountNumber;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    Account* account = findAccount(accounts, accountNumber);
    if (account) {
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;
        if (account->withdraw(amount)) {
            cout << "Withdrawal successful!\n";
        } else {
            cout << "Insufficient funds.\n";
        }
    } else {
        cout << "Account not found.\n";
    }
}

void displayAccountDetails(const vector<Account>& accounts) {
    int accountNumber;
    cout << "Enter Account Number: ";
    cin >> accountNumber;

    for (const auto& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            account.display();
            return;
        }
    }
    cout << "Account not found.\n";
}

Account* findAccount(vector<Account>& accounts, int accountNumber) {
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            return &account;
        }
    }
    return nullptr;
}
