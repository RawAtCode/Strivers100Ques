//Find all prime numbers in a given range

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int min, max;
    cin >> min >> max;

    for(int i=min; i<=max; i++){
        bool res = isPrime(i);

        if(res){
            cout << i << endl;
        }
    }

    return 0;
}