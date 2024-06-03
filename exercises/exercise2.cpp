// Write a program that reads a string from input and then, for each character read,
// prints out the character and its integer value on a line

#include <iostream>

using namespace std;

int main() {

    cout << "Please enter in a sentence: " << endl;
    char c;

    while (cin>>c){
        cout << c << "\t" << static_cast<int>(c) <<endl;
    }

    return 0; 
}