#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x)
        {
            ans = mid;
            // look for more small index on left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look for right
        }
       
    }

     return ans;
}
//Lower Bound: arr[ind] >= target, in lower/upper bound we get the index
//initialise ans as the size of the array, that is the default case
int lowerBound(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x)
        {
            ans = mid;
            // look for more small index on left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look for right
        }
       
    }

     return ans;
}

int main()
{
    vector<int> v = {2,3,5,6,7,8,11,11,11};
    int ans = lowerBound(v, v.size(),11);
    int ans1 = upperBound(v, v.size(),11);

    cout<<ans<<endl<<ans1<<endl;

}