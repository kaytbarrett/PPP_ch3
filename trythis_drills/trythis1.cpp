// Write a program that converts yen('y'), kroner ('k'), and pounds ('p') into dollars

#include <iostream>

using namespace std;

int main() {

    cout << "Please enter the amount of money you have and the unit(y, k, p)" << endl;
    double amount;
    char unit;
    cin >> amount >> unit;
    double dollars;

    if (unit == 'y'){
        dollars = amount * .0064;
        cout << "The amount in dollars is $" << dollars << "." << endl;
    } else if (unit == 'k'){
        dollars = amount * .095;
        cout << "The amount in dollars is $" << dollars << "." << endl;
    } else  if (unit == 'p'){
        dollars = amount * 1.28;
        cout << "The amount in dollars is $" << dollars << "." << endl;
    } else {
        cout << "Not a currency I know." << endl;
    }

    return 0;
}