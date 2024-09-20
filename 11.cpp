//Remove duplicates from a sorted array

#include<bits/stdc++.h>
using namespace std;

//WITH O(1) SPACE COMPLEXITY
void removeDuplicates(vector<int> &arr, int n){
    int j = 0;

    for(int i=1; i<=n; i++){
        if(arr[i] != arr[j]){
            j++;    //increment to make the indices equal
            arr[j] = arr[i];
        }
    }

    arr.erase(arr.begin()+j, arr.end());

    for(int num : arr){
        cout << num << " ";
    }
}

//

//THIS ONE USES O(n) EXTRA SPACE
// void removeDuplicates(vector<int> &arr, int n){
//     vector<int> res;

//     for(int i=1; i<=n; i++){
//         if(arr[i] != arr[i-1]){
//             res.push_back(arr[i-1]);
//         }
//     }

//     for(int num : res){
//         cout << num << " ";
//     }
// }

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    removeDuplicates(arr, n);

    return 0;
}