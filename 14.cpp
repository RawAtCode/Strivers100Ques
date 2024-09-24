// Find all non-repeating elements in an array

#include <bits/stdc++.h>
using namespace std;

void findNonRepeating(vector<int> &arr, int n)
{
    unordered_map<int, int> freq;

    for (int num : arr)
    {
        freq[num]++;
    }

    for (int &num : arr)
    {
        if(freq[num] == 1){
            cout << num << " ";
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    stringstream ss(str);

    //One way to take inputs
    // int num;
    // vector<int> arr;

    // while (ss >> num)
    // {
    //     arr.push_back(num);
    // }

    //Other way to take inputs
    string temp;
    vector<int>arr;

    while(getline(ss, temp, ' ')){
        arr.push_back(stoi(temp));
    }

    findNonRepeating(arr, arr.size());

    return 0;
}