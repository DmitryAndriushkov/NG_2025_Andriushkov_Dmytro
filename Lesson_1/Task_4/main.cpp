#include <iostream>

using namespace std;

int main()
{
    short userInput = 0;
    int userSizeInput = 0;

    cout << "Hello, this program can draw:"
         << endl << "1) Triangle"
         << endl << "2) Square" << endl << endl;

    cout << "Select a polygon: ";
    cin >> userInput;

    cout << endl << "Enter a size of polygon you selected: ";
    cin >> userSizeInput;

    if (userInput == 1){
        for(int column = 1; column <= userSizeInput; column++){
            for(int row = 0; row < column; row++){
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (userInput == 2){
        for(int column = 1; column <= userSizeInput; column++){
            for(int row = 0; row < userSizeInput; row++){
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}
