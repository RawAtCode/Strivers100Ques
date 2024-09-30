//Sort elements by their frequency in an array

#include <bits/stdc++.h>
using namespace std;

void sortByFrequency(vector<int> &arr){
    unordered_map<int, int> freqMap;

    for(int num : arr){
        freqMap[num]++;
    }

    vector<pair<int, int>> newArr;

    for(auto &it : freqMap){
        newArr.push_back({it.first, it.second});
    }

    sort(newArr.begin(), newArr.end(), [] (pair<int, int> &a, pair<int, int> &b){
        if(a.second == b.second){
            return a.second < b.second;
        }

        return a.second > b.second;
    });

    for (auto &it : newArr) {
        for(int i=0; i<it.second; i++){
            cout << it.first << " ";
        }
    }
}


int main() {
    vector<int> arr;
    string str;
    getline(cin, str);
    stringstream ss(str);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }

    sortByFrequency(arr);

    return 0;
}