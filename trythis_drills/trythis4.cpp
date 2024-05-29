// Rewrite the character value from the previous Try This using a for-statement
// Then modify your program to also write out a table of the integer values for uppercase letters & digits

#include <iostream>

using namespace std;

int main() {

    char letter = 'A';
    int i = 0;
    char currentLetter;

    for(int i = 0; i < 58; i++){
        if (i < 26) {
            currentLetter = letter + i;
            cout << currentLetter << "\t" << static_cast<int>(currentLetter) << endl;
        } else if (i > 31){
            currentLetter = letter + i;
            cout << currentLetter << "\t" << static_cast<int>(currentLetter) << endl;
        }
        
    }

    return 0;
}
