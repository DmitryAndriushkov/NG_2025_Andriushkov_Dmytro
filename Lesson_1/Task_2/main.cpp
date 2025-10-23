#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    short userOption = 0;
    float firstNum = 0;
    float secondNum = 0;
    float result = 0;

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
                result = firstNum + secondNum;
                break;

            case 2:
                result = firstNum - secondNum;
                break;

            case 3:
                result = firstNum * secondNum;
                break;

            case 4:
                result = firstNum / secondNum;
                break;

            case 5:
                result = pow(firstNum, secondNum);
                break;

        }
    } else if(userOption == 6){
        cout << "\nSquare root of: ";
        cin >> firstNum;
        result = sqrt(firstNum);
    }
    else{
        cout << "Invalid option";
    }
    cout << "\nResult: " << result << endl;
    return 0;
}
