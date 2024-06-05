/*
    Using the emperor grains of rice per chess square story, write a program to calculate
    how many squares are required to give the inventor at least 1,000 grains of rice, at least
    1,000,000 grains of rice, and 1,000,000,000 grains of rice.
*/

#include <iostream>

using namespace std;

int main () {

    long long current = 1;
    long long totalGrains = 1;
    int squares = 1;
    int squaresForThousand = 0;
    int squaresForMil = 0;
    int squaresForBil = 0;

    for (int i = 0; i < 64; i++){
        current *= 2;
        totalGrains = current;
        squares++;

        if (current >= 1000 && current < 2000){
            squaresForThousand = squares;
        }
        if (current >= 1000000 && current < 2000000) {
            squaresForMil = squares;
        } 
        if (current >= 1000000000 && current < 2000000000) {
            squaresForBil = squares;
        } 
    }

    cout << "The squares required for a minimum of a thousand grains is " << squaresForThousand << endl;
    cout << "The squares required for a minimum of a million grains is " << squaresForMil << endl;
    cout << "The squares required for a minimum of a billion grains is " << squaresForBil << endl;

    return 0;
}