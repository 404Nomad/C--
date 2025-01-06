#include "Account.h"
#include <iostream>
#include <iomanip>

// Constructor
Account::Account(std::string name, int accountNumber, double initialBalance)
    : name(name), accountNumber(accountNumber), balance(initialBalance) {}

// Getters
std::string Account::getName() const { return name; }
int Account::getAccountNumber() const { return accountNumber; }
double Account::getBalance() const { return balance; }

// Operations
void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount > balance) {
        return false; // Insufficient funds
    }
    balance -= amount;
    return true;
}

// Display account details
void Account::display() const {
    std::cout << "Account Number: " << accountNumber << "\n"
              << "Name: " << name << "\n"
              << "Balance: $" << std::fixed << std::setprecision(2) << balance << "\n";
}
