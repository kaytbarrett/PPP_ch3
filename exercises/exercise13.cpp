/*
    Write a program to find all prime numbers using the Sieve of Eratosthenes.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve_of_eratosthenes(int n){

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++){
        if (isPrime[i]){
            for(int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 0; i < n; i++){
        if (isPrime[i]){
            primes.push_back(i);
        }
    }

    return primes;
}

int main (){

    vector<int> primes = sieve_of_eratosthenes(100);

    for (int prime : primes){
        cout << prime << endl;
    }

    return 0;
}