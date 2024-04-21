#include <iostream>
#include <time.h>
#include <time.h>
using namespace std;

int main() {
  int Option1 = 1, Option2 = 2, Option3 = 3, Option4 = 4, account_Options;
  string user_Name, user_Password;
  srand(time(NULL));
  int account_No = rand() % 32767 + 30000;
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
    cout << "Your account Number is: " << 100 << account_No;
    cout << "How would you like to procceed?" << endl;
    cout << "1.Deposit \n"
            "2.Withdraw \n"
            "3.Check Balance \n"
            "4.Exit \n";
    cin >> account_Options;
  
    } else { // Option for current user
      cout << "Welcome back to your account \n";
    }
  
  return 0;
}