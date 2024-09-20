//Rotate array by K elements in an array

#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int k, int n){
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());

    for(int num : arr){
        cout << num << " ";
    }
}


int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    k %= n;

    rotateArray(arr, k, n);

    return 0;
}