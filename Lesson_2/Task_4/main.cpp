#include <iostream>

using namespace std;

int main()
{
    char userInput[1001];
    int wordCounter = 0;
    bool inWord = false;

    cout << "Hello, this program will count the words in the sentence" << endl << endl;
    cout << "Your sentence: ";
    cin.getline(userInput, 1001);

    for(int index = 0; userInput[index] != '\0'; index++){
        if((userInput[index] >= 65 && userInput[index] <= 90) ||
            (userInput[index] >= 97 && userInput[index] <= 122)){

            if(inWord == false){
                inWord = true;
                wordCounter++;
                }
            }

        else{
            inWord = false;
        }
    }

    cout << "Words in sentence: " << wordCounter << endl;

    return 0;
}

