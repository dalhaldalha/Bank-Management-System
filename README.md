# Simple Bank Management System

Welcome to the Simple Bank Management System! This is a basic C++ program designed to simulate simple banking operations such as depositing money, withdrawing money, and checking account balance.

## Features

- **Account Creation**: Users can create an account with an initial balance.
- **Deposit Money**: Users can deposit money into their account.
- **Withdraw Money**: Users can withdraw money from their account, provided they have sufficient balance.
- **Check Balance**: Users can check the current balance of their account.
- **Random Account Number**: Each user gets a randomly generated account number for a unique banking experience.

## How to Use

1. **Welcome Message**: When you run the program, you will be greeted with a welcome message and asked for your first name.
2. **Account Details**: After entering your name, you will receive your account details including a randomly generated account number.
3. **Account Operations**: You can choose from the following options to manage your account:
    - Deposit Money
    - Withdraw Money
    - Check Balance
    - Exit the program

## Code Overview

The program consists of a `BankAccount` class with the following members:

- **Private Members**:
  - `double balance`: Stores the account balance.

- **Public Members**:
  - `string accountName`: Stores the account name.
  - **Constructor**: Initializes the account with an initial balance.
  - **Methods**:
    - `void deposit(double amount)`: Deposits the specified amount to the account.
    - `void withdraw(double amount)`: Withdraws the specified amount from the account if sufficient balance is available.
    - `double getBalance() const`: Returns the current account balance.

The `main` function handles the user interface, prompting the user for their name, generating a random account number, and providing options for depositing, withdrawing, checking balance, and exiting the program.

## Usage Example

Here is an example of how the program might operate:

```
Welcome to Simple Bank 
What is your first name? 
John

Hello John, these are your Bank details: 

Account Name: John
Account Number: 1234567890
How would you like to proceed?

1.Deposit
2.Withdraw
3.Check Balance
4.Exit
1
How much would you like to deposit
100
Deposit $100. Your Balance is $100.

How would you like to proceed?

1.Deposit
2.Withdraw
3.Check Balance
4.Exit
3
Your current balance is: $100

How would you like to proceed?

1.Deposit
2.Withdraw
3.Check Balance
4.Exit
4
Thank you for using Simple Bank!
```

## Compilation and Execution

To compile and run the program, use the following commands in your terminal:

```sh
g++ -o bank_management_system bank_management_system.cpp
./bank_management_system
```

Make sure you have a C++ compiler installed, such as g++.

## Contribution

Contributions are welcome! Feel free to submit pull requests or open issues for any improvements or bug fixes.

Thank you for using Simple Bank!

## License

This project is licensed under the MIT License.

MIT License

Copyright (c) 2024 Dalha Lawan DaLha

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.