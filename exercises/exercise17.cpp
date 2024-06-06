/*
    Write a program to solve quadratic equations in the form of ax^2 + bx + c = 0. 
    Since there are two solutions to a quadratic equation, output both x1 and x2. 
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int main() {

    cout << "Please enter a quadratic equation in the form of ax^2 + bx + c = 0: " << endl;
    string equation;

    getline(cin, equation);

    vector<string> substrings;
    char delimiter1 = 'x';
    size_t pos = 0;
    size_t found = 0;

    while((found = equation.find(delimiter1, pos)) != string::npos){
        string substring = equation.substr(pos, found - pos);
        substrings.push_back(substring);

        pos = found + 1;
    }

    string substring1 = substrings[0];
    string substring2 = substrings[1];

    substring2 = substring2.substr(5);

    char delimiter2 = '=';
    size_t delimiterPos = equation.find(delimiter2);
    string substring3 = equation.substr(pos + 3, delimiterPos - (pos + 3));

    double a = stod(substring1);
    double b = stod(substring2);
    double c = stod(substring3);

    double x1 = (-b + sqrt((b * b) - (4 * a * c)))/(2 * a);
    double x2 = (-b - sqrt((b * b) - (4 * a * c)))/(2 * a);

    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;

    return 0;
}