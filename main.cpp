#include <iostream>
using namespace std;

int main() {
  int any;
  char newAccount = 'N' || 'n';
  char oldAccount = 'A';
  cout << "Welcome to the Bank of Criminals!! \nPress any key to continue....\n";
  cout << "If you want to open a new accout type (N) or if you already have an account with us, type (A) \n";
  cin >> oldAccount;
  if (oldAccount) {
    cout << "Welcome back to your account \n";
    cout << "How would you like to proceed? \n";
    cin >> any;
    cout << "1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit Bank";

  } else  {
    cout << "Welcome new user \n";
    
  }
  
  
  return 0;
}