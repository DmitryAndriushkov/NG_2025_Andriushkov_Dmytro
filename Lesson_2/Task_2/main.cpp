#include <iostream>

using namespace std;

int main()
{
    int userInput[5] = {0};
    int maxRows = userInput[0];

    cout << "Hello, this program can draw figures" << endl << endl;
    cout << "You'll need to enter 5 numbers, and depending on your input, " << endl
            << "it will display a picture of vertically drawn stars." << endl << endl;

    for(int numCounter = 0; numCounter < 5; numCounter++){
        cout << "Please enter #" << numCounter+1 << " number: ";
        cin >> userInput[numCounter];
    }

    for(int index = 0; index < 5; index++){
        if(userInput[index] > maxRows)
            maxRows = userInput[index];
    }

    for(int row = 0; row < maxRows; row++){
        for(int column = 0; column < 5; column++){
            if(userInput[column] > row){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
