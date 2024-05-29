// Rewrite your currency program from the previous Try This to use a switch-statement 

#include <iostream>

using namespace std; 

int main() {

    cout << "Please enter in a currency amount and a currency unit(y, k, p):\n";
    double amount; 
    char unit;
    cin >> amount >> unit;
    double dollars;

    switch(unit){
        case 'y':
            dollars = amount * .0064;
            cout << "The amount in dollars is $" << dollars << "." << endl;
            break;
        case 'k':
            dollars = amount * .095;
            cout << "The amount in dollars is $" << dollars << "." << endl;
            break;
        case 'p':
            dollars = amount * 1.28;
            cout << "The amount in dollars is $" << dollars << "." << endl;
            break;
        default: 
            cout << "I do not know this currency unit." << endl;
            break;
    }

    return 0;
}