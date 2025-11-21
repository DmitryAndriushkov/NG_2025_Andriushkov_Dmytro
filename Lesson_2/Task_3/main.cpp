#include <iostream>

using namespace std;

int main()
{
    char userInput[1001];
    char vowels[] = "aeiouAEIOU";
    char consonants[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";


    int sentenceLength = 0;
    int vowCounter = 0;
    int consantCounter = 0;

    cout << "Hello, this program displays the percentage ratio of vowels and consonants in a sentence" << endl;
    cout << "Enter a sentence: ";
    cin.getline(userInput, 1001);

    while(userInput[sentenceLength] != '\0'){
        sentenceLength++;
    }

    for(int charIndex = 0; userInput[charIndex] != '\0'; charIndex++){
        for(int vowChar = 0; vowels[vowChar] != '\0'; vowChar++){
            if(userInput[charIndex] == vowels[vowChar]){
                vowCounter++;
            }
        }
        for(int consChar = 0; consonants[consChar] != '\0'; consChar++){
            if(userInput[charIndex] == consonants[consChar]){
                consantCounter++;
            }
        }
    }

    cout << "Vowels: " << ((double)vowCounter / sentenceLength) * 100 << "%" << endl;
    cout << "Consonants: " << ((double)consantCounter / sentenceLength) * 100 << "%" << endl;

    return 0;
}
