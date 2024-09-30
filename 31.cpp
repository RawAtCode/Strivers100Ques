//Check if a number is armstrong or not

#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int digits = 0;
    int temp = n;

    while(temp > 0){
        digits++;
        temp /= 10;
    }

    int total = 0;
    temp = n;

    while(temp > 0){
        int currDigit = temp % 10;
        temp /= 10;
        total += pow(currDigit, digits);
    }

    return n == total;
}

int main(){
    int n;
    cin >> n;

    if(isArmstrong(n)){
        cout << "Armstrong number.";
    }
    else{
        cout << "Not armstrong number.";
    }

    return 0;
}