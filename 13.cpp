    //Find all repeating elements in an array

    #include<bits/stdc++.h>
    using namespace std;

    void findRepeating(vector<int> &arr, int n){
        unordered_set<int> seen;
        unordered_set<int> repeating;

        for(int num : arr){
            if(seen.find(num) != seen.end()){
                repeating.insert(num);
            }
            else{
                seen.insert(num);
            }
        }

        for(const int &num : repeating){
            cout << num << " ";
        }
    }

    int main(){
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        findRepeating(arr, n);

        return 0;
    }