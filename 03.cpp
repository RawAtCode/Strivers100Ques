// Second smallest and second largest number in an array

#include <bits/stdc++.h>
using namespace std;

int findSecondMax(vector<int> arr, int n)
{
    int maxEle = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxEle)
        {
            secondMax = maxEle;
            maxEle = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != maxEle)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int findSecondMin(vector<int> arr, int n)
{
    int minEle = INT_MAX;
    int secondMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minEle)
        {
            secondMin = minEle;
            minEle = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != minEle)
        {
            secondMin = arr[i];
        }
    }
    return secondMin;
}

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        return -1;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findSecondMin(arr, n) << endl;
    cout << findSecondMax(arr, n) << endl;

    return 0;
}

// 10 3 7 -1 0 20
// mE :   10
// sM :   10
// min :  -1
// sMin : 3