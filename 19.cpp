//Sort elements by their ranks in an array

#include <bits/stdc++.h>
using namespace std;

void sortByRank(vector<int> arr){
    vector<int> sortedArr = arr;
    sort(begin(sortedArr), end(sortedArr));

    unordered_map<int, int> mp;
    int rank = 1;

    for(int num : sortedArr){       //assign ranks
        if(mp.find(num) == mp.end()){   //check if rank is not assigned to the number
            mp[num] = rank;
            rank++;
        }
    }

    for(int &num : arr){      //printing
        cout << mp[num] << " ";
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
    
    sortByRank(arr);
    
    return 0;
}