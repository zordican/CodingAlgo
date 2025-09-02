#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
   
    while (t--) {
        long long n, x , y;
        cin >> n >>x >> y;

        //kitna x wala hai
        long long numX = n/x;
        long long numY = n/y;

        long long lcm = (x/gcd(x,y))*y;

        long long common = n/lcm;

        numX -= common;
        numY -= common;

        long long numXSum = (numX)*(2*(n-numX+1)+(numX-1))/2;
        long long numYsum = (numY)*(numY+1)/2;

        cout << numXSum - numYsum << "\n";
        // cout << lcm << " " << numX << " " << numY << " " << numXSum << " " << numYsum << endl;
    }
    return 0;
} 
