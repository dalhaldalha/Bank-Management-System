#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

//This function gives a Bank Account class

class BankAccount {
  double account_balance;

public:
  void set_balance(double initial_balance = 0.0) {
    account_balance = initial_balance;
  }

  void deposit(double deposit_amount)
  {
    account_balance += deposit_amount;
  }
};

int main() {
  int Option1 = 1, Option2 = 2, Option3 = 3, Option4 = 4, account_Options;
  string user_Name, user_Password;
  srand(time(NULL));
  int account_No = rand() % 10000000000 + 1000000000;
  cout << "Welcome to Scam Bank \n" // Welcome message and Options to choose New account or Proceed to an account.
          "1.Open New Account \n"
          "2.Continue to my Account \n"
          "How would you like to proceed?...\n";
  cin >> account_Options;
  if (account_Options == Option1)
  { // Option for New user.
    cout << "Welcome, New user \n";
    cout << "Please type your First name:... \n";
    cin >> user_Name;
    cout << "Please type a password:... \n";
    cin >> user_Password;
    cout << "Hi " << user_Name << ", Thanks for creating an accout with us!" << endl;
    cout << "Your account Number is: " << account_No;
    while (true)
    {
      double deposit_amount;
      cout << "How would you like to procceed?" << endl;
      cout << "1.Deposit \n"
              "2.Withdraw \n"
              "3.Check Balance \n"
              "4.Exit \n";
      cin >> account_Options;

      const int option1= 1, option2 = 2, option3 = 3, option4 = 4;
      switch (account_Options) {
        case option1:
          cout << "How much would you like to deposit" << endl;
          cin >> deposit_amount;
          cout << "You have successfully deposit $" <<  << " to your balance." << endl;
          break;
        case option2:
          int withdraw;
          cout << "How much would you like to withdraw? \n";
          cin >> withdraw;
          cout << "You have withdrawn: " << withdraw << endl;
          break;
        case option3:
          cout << "Your current balance is: " << newAccount.bank_balance << endl;
          break;
        case option4:
          cout << "Thank you for using Scam Bank!" << endl;
          return 0;
          break;
        default:
          cout << "Invalid Option" << endl;
          break;
      }
    }

  }  return 0;
}