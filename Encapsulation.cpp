#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Data hidden from outside access

public:
    void setBalance(double amount) { // Setter
        if (amount >= 0)
            balance = amount;
        else
            cout << "Invalid amount!" << endl;
    }

    double getBalance() { // Getter
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000);
    cout << "Current balance: " << acc.getBalance();
    return 0;
}
