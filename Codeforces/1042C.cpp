#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
#define endl '\n'

struct Compare {
    bool operator()(const pair<int,int> &a, const pair<int,int> &b) {
        if (a.first == b.first)
            return a.second > b.second; 
        return a.first < b.first; 
    }
};

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
   
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(auto& it:v){
            cin >> it;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> pq;
        for(int i = 0; i < n; i++){
            pair<int,int> p;
            p.first = v[i];
            p.second = i;
            pq.push(p);
        }
        vector<int> ans;
        while(!pq.empty()){
            pair<int,int> top = pq.top();
            pq.pop();
            top.first -= k;

            if(top.first <= 0){ans.push_back(top.second + 1);}
            else pq.push(top);
        }
        for(auto it : ans){
            cout<<it<<" ";
        }
        cout << "\n";
    }
    return 0;
} 
