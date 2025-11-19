#include <iostream>

using namespace std;

int main()
{
    int userInput = 0;

    cout << "Hello, this program can draw rhombus" << endl << endl;
    cout << "Lenght: ";
    cin >> userInput;

    for(int row = 1; row <= userInput; row++){
        for(int space = row; space < userInput; space++){
            cout << " ";
        }

        for(int star = 1; star <= (2 * row - 1); star++){
            cout << "*";
        }
        cout << endl;
    }

    for(int reverseRow = userInput - 1; reverseRow >= 1; reverseRow--){
        for(int reverseSpace = reverseRow; reverseSpace < userInput; reverseSpace++){
            cout << " ";
        }

        for(int reverseStar = 1; reverseStar <= (2 * reverseRow - 1); reverseStar++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
