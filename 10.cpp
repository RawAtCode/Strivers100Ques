//Find median of an array

#include<bits/stdc++.h>
using namespace std;

void findMedian(vector<int> arr , int n){
    int idx = n/2;

    double median = (n%2 == 0 ? (arr[idx] + arr[idx-1])/2.0 : arr[n/2]);

    cout << median;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    findMedian(arr, n);

    return 0;
}

// 1 2 3 4 5 6