//Find the largest number in an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    int maxEle = INT_MIN;

    for(int i=0; i<n; i++){
        cin >> arr[i];

        if(arr[i] > maxEle){
            maxEle = arr[i];
        }
    }

    cout << maxEle;


    return 0;
}