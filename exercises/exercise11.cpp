/*
    Write a program that plays the game of Rock, Paper, Scissors. Use a switch statement to solve this.
    Also, the machine should give random answers. Real randomness is too hard to provide just now,
    so just build a vector with a sequence of values to be used as the "next value". If you build the 
    vector into the program, it will always play the same game, so maybe you should let the user enter
    some values. Try variations to make it less easy for the user to guess which move the machine
    will make.
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {

    cout << "Let's play rock, paper, scissors!" << endl;

    int playerCounter = 0;
    int compCounter = 0;


    while (playerCounter < 3 && compCounter < 3){

        cout << "Please enter rock, paper, or scissors: " << endl;
        string value;
        cin >> value;

        int number;

        if (value == "rock"){
            number = 1;
        } else  if (value == "paper"){
            number = 2;
        } else if (value == "scissors"){
            number = 3;
        }

        srand(time(0)); // Use current time as seed
        int randomNumber = rand() % 3 + 1;
        string compValue;

        if (randomNumber == 1){
            compValue = "rock";
        } else if (randomNumber == 2){
            compValue = "paper";
        } else if (randomNumber == 3){
            compValue = "scissors";
        }

        cout << "The computer chose " << compValue << endl;

        int total = number - randomNumber;

        /*
            Hrock(1) - Crock(1) = 0 No winner
            Hrock(1) - Cpaper(2) = -1  C wins
            Hrock(1) - Cscissors(3) = -2 H wins
            hpaper(2) - Crock(1) = 1 H wins
            hpaper(2) - Cpaper(2) = 0 No winner
            hpaper(2) - Cscissors(3) = -1 C wins
            hscissors(3) - Crock(1) = 2 C wins
            hscissors(3) - cpaper(2) = 1 H wins

        */

        switch(total){
            case 0: 
                cout << "No winner this round\n" << endl;
                break;
            case -1:
                cout << "Computer wins this round\n" << endl;
                compCounter++;
                break;
            case -2: 
                cout << "You win this round\n" << endl;
                playerCounter++;
                break;
            case 1:
                cout << "You win this round\n" << endl;
                playerCounter++;
                break;
            case 2:
                cout << "Computer wins this round\n" << endl;
                compCounter++;
                break;   
        }

    }

    if (compCounter > playerCounter) {
        cout << "The computer wins!" << endl;
    } else if (compCounter < playerCounter){
        cout << "You win!" << endl;
    } else if (compCounter == playerCounter) {
        cout << "No one wins :( " << endl;
    }

    return 0;
}