/*
    Write a program to find all prime numbers 1 - 100.
*/

#include <iostream> 
#include <vector>

using namespace std;

int main () {

    vector<int> primes = {2}; 

    for (int i = 3; i <= 100; i++){
        bool isPrime = true;
        for (int j = 0; j < primes.size() - 1; j++){
            if (i%primes[j] == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            primes.push_back(i);
        }
    }

    for (int i = 0; i < primes.size(); i++){
        cout << primes[i] << endl;
    }

    return 0; 
}