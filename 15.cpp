//Find all symmetric pairs in the array

#include<bits/stdc++.h>
using namespace std;


void getSymmetricPairs(vector<pair<int, int>> &arr){
    int n = arr.size();
    unordered_map<int, int> mp;

    for(auto &p : arr){
        int first = p.first;
        int second = p.second;

        if(mp.count(second) && mp[second] == first){
            cout << "(" << second << "," << first << ")";
        }
        else{
            mp[first] = second;
        }
    }
}


int main(){
    string str;
    getline(cin, str);

    vector<pair<int, int>> arr;
    stringstream ss(str);
    int num1, num2;

    while(ss >> num1 >> num2){
        arr.push_back({num1, num2});
    }

    getSymmetricPairs(arr);


    return 0;
}