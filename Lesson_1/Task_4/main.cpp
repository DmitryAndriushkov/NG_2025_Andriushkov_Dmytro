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

    if(userInput > 2){
        cout << "Invalid input" << endl;
        return 0;
    }

    cout << endl << "Enter a size of polygon you selected: ";
    cin >> userSizeInput;

    for(int column = 1; column <= userSizeInput; column++){
        for(int row = 0; row < userSizeInput; row++){
            if (userInput == 1 && row >= column){
                continue;
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
