// Go through the drill step by step, do not try to speed up by skipping steps
// Test each steps by entering at least three pairs of values - more values is better

#include <iostream> 

using namespace std;

int main () {

    cout << "Please enter in three pairs of numbers (ex: 1 2 3 4 5 6 |):" <<endl;
    int num1;
    int num2;

    while(cin>>num1>>num2) {
        cout << num1 << "\t" << num2 << endl;
    }

    return 0;
}