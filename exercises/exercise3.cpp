/*  
    If we define the median of a sequence as "a number so that exactly as many elements
    come before it in the sequence as come after it", fix the program in 3.6.3 so that it always prints
    out a median. Hint: A median need not be an element of the sequence. 
*/

#include <iostream> 
#include <vector>

using namespace std;

int main () {

    cout << "Please enter in some whole numbers followed by \'|\': " << endl;
    double num;
    vector<double> v;

    while (cin>>num){
        v.push_back(num);
    }

    sort(v.begin(), v.end());
    double median = 0;

    if (v.size() % 2 == 0 ){
        median = (v[v.size()/2] + v[(v.size()/2 - 1)])/2;
    } else {
        median = v[v.size()/2];
    }

    cout << "The median of these values is: " << median << endl;

    return 0; 
}