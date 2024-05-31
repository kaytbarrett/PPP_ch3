// Go through the drill step by step, do not try to speed up by skipping steps
// Test each steps by entering at least three pairs of values - more values is better

#include <iostream> 

using namespace std;

int main () {

    cout << "Please enter in three pairs of whole numbers (ex: 1 2 3 4 5 6 |):" <<endl;
    double num1;
    double num2;

    while(cin>>num1>>num2) {
        if (num1 < num2) {
            if((num2 - num1) < 0.01){
                cout << "The smaller number is: " << num1 << "\t" << "The larger number is: " << num2 << "  (These numbers are almost equal)"<<endl;
            } else {
                cout << "The smaller number is: " << num1 << "\t" << "The larger number is: " << num2 <<endl;
            }
        } else if (num2 < num1) {
            if((num1 - num2) < 0.01){
                cout << "The smaller number is: " << num2 << "\t" << "The larger number is: " << num1 << "  (These numbers are almost equal)"<<endl;
            } else {
                cout << "The smaller number is: " << num2 << "\t" << "The larger number is: " << num1 <<endl;
            }        
        } else {
            cout << num1 << " and " << num2 << " are the same number" << endl;
        }
    }

    return 0;
}