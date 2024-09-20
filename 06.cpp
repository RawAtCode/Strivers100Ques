//Rearrange array in increasing or decreasing order

#include<bits/stdc++.h>
using namespace std;

void helper(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());

    for(int i=0; i<n/2; i++){
        cout << arr[i] << " ";
    }

    for(int i=n-1; i>=n/2; i--){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    helper(arr, n);

    return 0;
}