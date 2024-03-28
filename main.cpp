#include <iostream>
#include <time.h>
using namespace std;

int main() {
  int Option1 = 1, Option2 = 2, account_Options;
  string user_Name, user_Password;
  srand (time(NULL));
  cout << "Welcome to Scam Bank \n" // Welcome message and Options to choose New account or Proceed to an account.
    "1.Open New Account \n"
    "2.Continue to my Account \n"
    "How would you like to proceed?..."
  ;
  cin >> account_Options; 
    if (account_Options == Option1) { //Option for New user.
      cout << "Welcome, New user \n";
      cout << "Please type your First name:... \n";
        cin >> user_Name;
      cout << "Please type a password:... \n";
        cin >> user_Password;
      cout << "Your Name is " <<user_Name<<endl;
      cout << "Your Password is " <<user_Password<<endl;
      cout << "Your account Number is: ";

    } else { // Option for current user
      cout << "Welcome back to your account \n";
    }
  
  return 0;
}