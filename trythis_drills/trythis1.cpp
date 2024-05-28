// Write a program that converts yen('y'), kroner ('k'), and pounds ('p') into dollars

#include <iostream>

using namespace std;

int main() {

    cout << "Please enter the amount of money you have and the unit(y, k, p)" << endl;
    double money;
    char unit;
    cin >> money >> unit;

    if (unit == 'y'){
        double dollars = unit * .0064;
        cout << "The amount in dollars is $" << dollars << "." << endl;
    } else if (unit == 'k'){
        double dollars = unit * .095;
        cout << "The amount in dollars is $" << dollars << "." << endl;
    } else  if (unit == 'p'){
        double dollars = unit * 1.28;
        cout << "The amount in dollars is $" << dollars << "." << endl;
    } else {
        cout << "Not a currency I know." << endl;
    }

    return 0;
}