// Go through the drill step by step, do not try to speed up by skipping steps
// Test each steps by entering at least three pairs of values - more values is better

#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    // cout << "Please enter in three pairs of whole numbers (ex: 1 2 3 4 5 6 |):" <<endl;
    // double num1;
    // double num2;

    // while(cin>>num1>>num2) {
    //     if (num1 < num2) {
    //         if((num2 - num1) < 0.01){
    //             cout << "The smaller number is: " << num1 << "\t" << "The larger number is: " << num2 << "  (These numbers are almost equal)"<<endl;
    //         } else {
    //             cout << "The smaller number is: " << num1 << "\t" << "The larger number is: " << num2 <<endl;
    //         }
    //     } else if (num2 < num1) {
    //         if((num1 - num2) < 0.01){
    //             cout << "The smaller number is: " << num2 << "\t" << "The larger number is: " << num1 << "  (These numbers are almost equal)"<<endl;
    //         } else {
    //             cout << "The smaller number is: " << num2 << "\t" << "The larger number is: " << num1 <<endl;
    //         }        
    //     } else {
    //         cout << num1 << " and " << num2 << " are the same number" << endl;
    //     }
    // }

    // cout << "\nPlease enter in some numbers:" <<endl;
    // double num;
    // double largestNum = 0;
    // double smallestNum = 10000000;

    // while (cin>>num){
    //     if( num > largestNum && num < smallestNum){
    //         largestNum = num;
    //         smallestNum = num;
    //     } else if (num > largestNum ) {
    //         cout << num << " is the largest number so far" << endl;
    //         largestNum = num;
    //     } else if (num < smallestNum) {
    //         cout << num << " is the smallest number so far" << endl;
    //         smallestNum = num;
    //     }
    // }


    cout << "\nPlease enter a number and a unit (only units cm, m, in, ft; ex: 12m):" << endl;
    string numStr;
    vector<double> v;

    while(cin>>numStr){

        size_t pos = 0;
        while(pos < numStr.length() && isdigit(numStr[pos])){
            pos++;
        }

        if (pos == 0 || pos == numStr.length()){
            cout << "Invalid input. Please enter an number followed by a unit.";
        }

        string numberPart = numStr.substr(0, pos);
        double num = stod(numberPart);
        cout << "num: " << num << endl;

        string unit = numStr.substr(pos);
        cout << "unit: " << unit << endl;

        if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft"){
            if (unit == "cm"){
                num *= 0.01;
                v.push_back(num);
            } else if (unit == "in"){
                num *= 0.0254;
                v.push_back(num);
            } else if (unit == "ft"){
                num *= 0.3048;
                v.push_back(num);
            } else if (unit == "m"){
                v.push_back(num);
            }
        } else {
            cout << unit << " is not a valid unit.";
            return 1;
        }
    }

    sort(v.begin(), v.end());

    cout << "The smallest number entered converted to meters is: " << v[0] << endl;
    cout << "The largest number entered converted to meters is: " << v[v.size() - 1] <<endl;

    double total = 0;;
    for (int i = 0; i < v.size(); i++){
        total += v[i];
    }

    cout << "The total is " << total << " meters." << endl;

    return 0;
}