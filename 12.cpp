//Adding elements (beginning, end, in between) in the array

#include<bits/stdc++.h>
using namespace std;

void insertAtBeginning(vector<int> &arr, int n, int ele){
    arr.insert(arr.begin(), ele);

    for(int num : arr){
        cout << num << " ";
    }

    cout << endl;
}

void insertAtEnd(vector<int> &arr, int n, int ele){
    arr.push_back(ele);

    for(int num : arr){
        cout << num << " ";
    }

    cout << endl;
}

void insertAtIndex(vector<int> &arr, int n, int idx, int ele){
    if(idx == 0){
        insertAtBeginning(arr, n, ele);
    }
    else if(idx == n){
        insertAtEnd(arr, n, ele);
    }
    else{
        arr.insert(arr.begin()+idx, ele);
    }

    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}


int main(){
    int n;
    cin >> n;

    int ele;
    cin >> ele;
    int idx;
    cin >> idx;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    insertAtBeginning(arr, n, ele);
    insertAtIndex(arr, n, idx, ele);
    insertAtEnd(arr, n, ele);

    return 0;
}