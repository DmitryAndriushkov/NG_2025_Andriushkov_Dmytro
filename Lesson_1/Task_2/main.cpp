#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    short userOption = 0;
    float firstNum = 0;
    float secondNum = 0;

    cout << "Hello, this is a simple calculator" << endl << endl;
    cout << "Options:"
             << endl << "1) Addition"
             << endl << "2) Subtraction"
             << endl << "3) Multiplication"
             << endl << "4) Division"
             << endl << "5) Find degree of number"
             << endl << "6) Square root of number" << endl;

    cout << endl << "Select option: ";
    cin >> userOption;

    if(userOption <= 5){
        cout << endl << "First number: ";
        cin >> firstNum;
        cout << "Second number: ";
        cin >> secondNum;

        cout << endl <<  "Result: ";
        switch(userOption){
            case 1:
                cout << firstNum + secondNum;
                break;

            case 2:
                cout << firstNum - secondNum;
                break;

            case 3:
                cout << firstNum * secondNum;
                break;

            case 4:
                cout << firstNum / secondNum;
                break;

            case 5:
                cout << pow(firstNum, secondNum);
                break;

        }
    } else if(userOption == 6){
        cout << endl << "Square root of: ";
        cin >> firstNum;
        cout << "Result: " << sqrt(firstNum);
    }
    else{
        cout << "Invalid option";
    }
    return 0;
}
