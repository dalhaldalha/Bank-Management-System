#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

class BankAccount {
  private:
    double balance;
  public:
    string accountName;
    // Constructor to initialize balance
    BankAccount(double initial_balance) {
      if(initial_balance >=0) {
        balance = initial_balance;
      } else {
        balance = 0;
        cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
      }
    }

    // Method to deposit money
    void deposit(double amount) {
      if (amount > 0) {
        balance += amount;
        cout << "Deposit $" << amount << ". Your Balance is $" << balance << "." << endl;
      } else {
        cout << "Deposit amount must be positive." << endl;
      }
    }

    // Method to withdraw money
    void withdraw(double amount) {
      if (amount > 0) {
        if (amount <= balance) {
          balance -= amount;
          cout << "Withdraw $" << amount << ". Your Balance is $" << balance << "." << endl;
        } else {
          cout << "Insuffient balance. Failed to withdraw." << endl;
        }
      } else {
        cout << "Withdraw amount must be positive." << endl;
      }
    }

    // Method to check balance
    double getBalance() const {
      return balance;
    }

};

int main() {
  srand(time(NULL));
  int account_No = rand() % 10000000000 + 1000000000; // Generates some random numbers
  int account_Options;
  double amount;
  BankAccount user1(0);
  // Welcome message and Input for Name
  cout << "Welcome to Simple Bank \n"
          "What is your first name? \n";
  cin >> user1.accountName;
  // Account Details section
  cout << "\nHello " << user1.accountName << ", these are your Bank details: \n";
  cout << "\nAccount Name: " << user1.accountName << endl;
  cout << "Account Number: " << account_No << endl;
  // Account Applicable Options

  while (true) 
  { 
    cout << "How would you like to procceed?\n" << endl;
      cout << "1.Deposit\n"
              "2.Withdraw\n"
              "3.Check Balance\n"
              "4.Exit\n";
      cin >> account_Options;

      const int option1= 1, option2 = 2, option3 = 3, option4 = 4;
      switch (account_Options) {
        case option1:
          int deposit;
          cout << "How much would you like to deposit" << endl;
          cin >> amount;
          user1.deposit(amount);
           break;
        case option2:
          int withdraw;
          cout << "How much would you like to withdraw? \n";
          cin >> amount;
          user1.withdraw(amount);
          break;
        case option3:
          cout << "Your current balance is: $" << user1.getBalance() << endl;
          break;
        case option4:
          cout << "Thank you for using Simple Bank!" << endl;
          return 0;
          break;
        default:
          cout << "Invalid Option" << endl;
          break;
  };
  
      }
      return 0;
}