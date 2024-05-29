// Implement square() without using the multiplication operator
// that is, do the x * x by repeated addition 
// (start a variable at 0 and add x to it x amount of times)

#include <iostream>

using namespace std;


int main () {

    cout << "Please enter a whole number you want the square of:" << endl;
    int numberToSquare;
    cin >> numberToSquare;
    int squaredNumber = 0;
    int i = 0;

    while (i < numberToSquare) {
        squaredNumber += numberToSquare;
        i++;
    }

    cout << "Your number squared is " << squaredNumber << endl;


    return 0;
}