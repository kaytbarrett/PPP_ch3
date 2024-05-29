// The char 'b' is char('a'+1), 'c' is char('a'+2), etc. 
// Use a loop to write out a table of characters with their corresponding integer values:
// a    97
// b    98
// ...
// z    122

#include <iostream>

using namespace std;

int main() {

    char letter = 'a';
    int i = 0;

    while (i < 26) {
        char currentLetter = letter + i;
        cout << currentLetter << "\t" << static_cast<int>(currentLetter) << endl;
        i++;
    }

    return 0; 
}