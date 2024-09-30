//Find equilibrium index of an array

#include<bits/stdc++.h>
using namespace std;

void findEquilibriumIndex(vector<int> &arr){
    int n = arr.size();
    int total = 0;

    for(int num : arr){
        total += num;
    }

    int leftSum = 0;
    int rightSum = total;

    for(int i=0; i<n; i++){
        rightSum -= arr[i];

        if(leftSum == rightSum){
            cout << i;
        }

        leftSum += arr[i];
    }
}

int main(){
    string str;
    vector<int> arr;

    getline(cin, str);
    stringstream ss(str);
    int num;

    while(ss >> num){
        arr.push_back(num);
    }

    findEquilibriumIndex(arr);

    return 0;
}