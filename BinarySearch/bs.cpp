#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 5, 6, 7, 8, 2, 34, 23, 54, 34};
    int n = arr.size();
    int target = 23;
    int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == target)
            break;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}