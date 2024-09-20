//Count frequency of each element in an array

#include<bits/stdc++.h>
using namespace std;

void countFreq(vector<int> &arr, int n){
    unordered_map<int, int> freq;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i : arr){
        if(freq[i] != 0){
            cout << i << " : " << freq[i] << endl;
            freq[i] = 0; // to avoid duplicates
        }
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    countFreq(arr, n);

    return 0;
}