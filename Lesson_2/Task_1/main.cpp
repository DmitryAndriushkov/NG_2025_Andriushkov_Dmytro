#include <iostream>

using namespace std;

int main()
{
    short userInput = 0;
    short userAccInput = 0;

    int amount = 0;
    int accounts[10] = {0};
    int sumOfAccount = 0;

    cout << "Hello, this program is something like a bank, it has 10 accounts" << endl << endl;
    while (1) {
        cout << "Options:"
             << endl << "1) Check an account"
             << endl << "2) Deposit"
             << endl << "3) Withdraw"
             << endl << "4) Total of all accounts"
             << endl << "5) Exit" << endl;
        cout << "Your choice: ";
        cin >> userInput;

        if (userInput == 1 || userInput == 2 || userInput == 3){
            cout << endl << "Choose an account: ";
            cin >> userAccInput;
            if (userAccInput <= 0 || userAccInput > 10){
                cout << "Error! Invalid account" << endl << endl;
                continue;
            }
        }

        switch(userInput){
            case 1:
                cout << "Money on the #" << userAccInput << " account: " << accounts[userAccInput-1] << endl << endl;
                break;

            case 2:
                cout << "Money you want to deposit: ";
                cin >> amount;
                accounts[userAccInput-1] += amount;

                cout << "You deposited " << amount << " to #" << userAccInput << " account" << endl << endl;
                break;

            case 3:
                cout << "Money you want to withdraw: ";
                cin >> amount;

                if (amount > accounts[userAccInput-1]){
                    cout << endl <<  "Error! Insufficient funds in account" << endl << endl;
                } else {
                    accounts[userAccInput-1] -= amount;
                    cout << "You withdrawed " << amount << " to #" << userAccInput << " account" << endl << endl;
                }
                break;

            case 4:
                sumOfAccount = 0;

                for (short accIndex = 0; accIndex < 10; accIndex++){
                    sumOfAccount += accounts[accIndex];
                }

                cout << "Total amount of funds in your accounts: " << sumOfAccount << endl << endl;
                break;

            case 5:
                return 0;

            default:
                cout << endl << "Invalid operation, please enter valid option(1-5)" << endl;
                break;
        }
    }
    return 0;
}
