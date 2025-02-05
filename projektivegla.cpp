#include <iostream>
#include <string>
using namespace std;

struct BankAccount {
    string accountNumber;
    string accountHolderName;
    double balance;
};

void createAccount(BankAccount &account, const string &accNum, const string &accHolder, double initBalance) {
    account.accountNumber = accNum;
    account.accountHolderName = accHolder;
    account.balance = initBalance;
    std::cout << "Account created successfully!\n";
}