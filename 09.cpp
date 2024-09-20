//Find average of all elements of an array

#include<bits/stdc++.h>
using namespace std;

void findAvg(vector<int> &arr, int n){
    int sum = 0;

    for(int num : arr){
        sum += num;
    }

    cout << sum/n;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    findAvg(arr, n);


    return 0;
}