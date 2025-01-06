#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string name;
    int accountNumber;
    double balance;

public:
    // Constructor
    Account(std::string name, int accountNumber, double initialBalance);

    // Getters
    std::string getName() const;
    int getAccountNumber() const;
    double getBalance() const;

    // Operations
    void deposit(double amount);
    bool withdraw(double amount);

    // Display details
    void display() const;
};

#endif
