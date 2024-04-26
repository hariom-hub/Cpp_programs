#include <iostream>
using namespace std;

static float balance = 0;

class Account
{
public:
    void ComputeInterest()
    {
        float interest;
        cout << "\nEnter the interest percentage you want to apply to your balance: ";
        cin >> interest;

        cout << "\nInterest entered by the user = " << interest;

        float balance_after_interest = balance * (1 + interest / 100);

        cout << "\nRemaining balance after applying interest is: " << balance_after_interest;
        cout << "\nOriginal balance = " << balance;
    }

    void showBalance()
    {
        cout << "\n----------Your Account Balance is Rs: " << balance << "---------------";
    }

    void WithdrawMoney()
    {
        int moneyWithdraw;
        cout << "\nEnter the amount of money you want to withdraw: ";
        cin >> moneyWithdraw;

        if (balance < moneyWithdraw)
        {
            cout << "\nSorry, you don't have enough money to withdraw.";
            cout << "\nCurrent Money in your account = " << balance;
        }
        else
        {
            balance -= moneyWithdraw;
            cout << "\nMoney withdrawn = " << moneyWithdraw;
            cout << "\nRemaining Balance = " << balance;
        }
    }

    void DepositMoney()
    {
        int moneyDeposit;
        cout << "Enter the amount of money that you want to deposit: ";
        cin >> moneyDeposit;

        balance += moneyDeposit;

        cout << "\nAmount you are going to deposit = " << moneyDeposit;
        cout << "\nYour current balance is: " << balance;
    }
};

int main()
{
    Account obj;
    int choice = 0;

    cout << "\n =========Welcome to Your Bank==========";
    cout << "\n---------Press the given keys to perform the task---------";
    cout << "\n1. Display Account Balance\n2. Calculate interest on your money\n3. Deposit Money in the account\n4. Withdraw money from the Account\n5. Exit\n";

    while (choice != 5)
    {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.showBalance();
            break;
        case 2:
            obj.ComputeInterest();
            break;
        case 3:
            obj.DepositMoney();
            break;
        case 4:
            obj.WithdrawMoney();
            break;
        case 5:
            break;
        default:
            cout << "\nPlease Enter a valid choice.\n";
            break;
        }
    }

    return 0;
}
