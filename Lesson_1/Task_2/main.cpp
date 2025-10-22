#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    short userOption = 0;
    float firstNum = 0;
    float secondNum = 0;

    cout << "Hello, this is a simple calculator" << endl << endl;
    cout << "Options:\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Find degree of number\n6) Square root of number" << endl;

    cout << "\nSelect option: ";
    cin >> userOption;

    if(userOption <= 5){
        cout << "\nFirst number: ";
        cin >> firstNum;
        cout << "Second number: ";
        cin >> secondNum;

        switch(userOption){
            case 1:
                cout << "\nResult: " << firstNum + secondNum << endl;
                break;

            case 2:
                cout << "\nResult: " << firstNum - secondNum << endl;
                break;

            case 3:
                cout << "\nResult: " << firstNum * secondNum << endl;
                break;

            case 4:
                cout << "\nResult: " << firstNum / secondNum << endl;
                break;

            case 5:
                cout << "\nResult: " << pow(firstNum, secondNum) << endl;
                break;

        }
    } else if(userOption == 6){
        cout << "\nSquare root of: ";
        cin >> firstNum;
        cout << "Result: " << sqrt(firstNum) << endl;
    }
    else{
        cout << "Invalid option";
    }
    return 0;
}
