#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int upperBound(vector<long long> arr,long long x)
{
    long long n = arr.size();
    long long low = 0, high = n - 1;
    long long ans = n;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
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

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
   
    while (t--) {
        long long n, q;
        cin >> n >> q;

        vector<long long> steps(n);

        for(auto& it : steps){
            cin >> it;
        }

        vector<long long> questions(q);

        for(auto& it : questions){
            cin >> it;
        }

        vector<long long> prefMax(n);
        long long maxi = LLONG_MIN;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, steps[i]);
            prefMax[i] = maxi;
        }
        vector<long long> prefSum(n);
        long long sum = 0;

        for(int i = 0; i < n; i++){
            sum+=steps[i];
            prefSum[i] = sum;
        }

       for(int i = 0; i < q; i++){
        long long capacity = questions[i];
        long long index = upperBound(prefMax,capacity);

        
        if (index == n) cout << prefSum[n - 1] << " ";
        else if (index == 0) cout << 0 << " ";
        else cout << prefSum[index - 1] << " ";
       }
       cout << "\n";
    }
    return 0;
} 
