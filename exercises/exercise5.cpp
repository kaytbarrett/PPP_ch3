/*
    Write a program to play a numbers guessing game. The user has to think of a number 1 - 100
    and your program has to ask questions to figure out what the number is (e.g. is the number 
    you're thinking of less than 50?). Your program should be able to identify the number after
    asking no more than seven questions.
*/

#include <iostream> 
#include <vector>

using namespace std;

int main () {
    cout << "Please think of a number 1 - 100 (type \'c\' and enter to continue)" << endl;
    int guessNum = 0;
    char c;
    cin >> c;
    int startingPos = 0;
    int startingNum = 50;
    int oldStart = 100;
    
    if (c == 'c'){
        for (int i = 0; i < 6; i++){
            cout << "Is your number less than " << startingNum << " (y/n):" << endl;
            char response;
            int newStart;
            cin >> response;
            if (response == 'y'){
                if (i < 5){
                    oldStart = startingNum;
                    newStart = (oldStart - startingPos)/2;
                    startingNum = startingPos + newStart;
                } else {
                    startingNum--;
                }
            } else if (response == 'n'){
                startingPos = startingNum;
                newStart = (oldStart - startingPos)/2;
                startingNum = startingPos + newStart;
                if ( i == 5 ){
                    startingNum++;
                }
            }
        }

        if (startingPos == startingNum) {
            cout << "Your number is: " << startingPos << endl;
        } else {
            for (int i = 0; i <= (startingNum - startingPos); i++){
                cout << "Is your number " << startingPos + i << "? (y/n)" <<endl;
                char response;
                cin >> response;
                if (response == 'y'){
                    cout << "Your number is: " << startingPos + i << endl;
                    break;
                }
            }
        }
    } else {
        cout << "Invalid input." << endl;
        return 1;
    }

    return 0;
}

