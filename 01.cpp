//Find the smallest number in an array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    int minEle = INT_MAX;

    for(int i=0; i<n; i++){
        cin >> arr[i];

        if(arr[i] < minEle){
            minEle = arr[i];
        }
    }

    cout << minEle;


    return 0;
}