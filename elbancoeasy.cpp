#include <iostream>
using namespace std;

class AccountHolder {
private:
    string name;

public:
    // Setter
    void setName(string n) {
        name = n;
    }

    // Getter
    string getName() {
        return name;
    }
};

class BankAccount : public AccountHolder {
private:
    int AccountNumber;
    double balance;

public:
    // Setter
    void setAccountNumber(int acc) {
        AccountNumber = acc;
    }

    void setBalance(double b) {
        balance = b;
    }

    // Getter
    int getAccountNumber() {
        return AccountNumber;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double InterestRate;

public:
    // Setter
    void setInterestRate(double r) {
        InterestRate = r;
    }

    // Getter
    double getInterestRate() {
        return InterestRate;
    }
};

int main() {
    SavingsAccount account;
    account.setName("Hezy");
    account.setAccountNumber(123456789);	
    account.setBalance(40000.49);
    account.setInterestRate(4.5);

    cout << "HOLDER IS: " << account.getName() << endl;
    cout << "BALANCE IS: " << account.getBalance() << endl;
    cout << "INTEREST RATE IS: " << account.getInterestRate() << "%" << endl;

    return 0;
}