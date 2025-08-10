#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        string s = "";
        cin>>s;
        // cout<<s<<endl;

        int left_max = x - 1;
        int right_max = n - x;

        int left_min = left_max;
        int right_min = right_max;

        int cnt = 0;
        for(int i = x - 2; i >= 0; i--){
            if(s[i] == '#')break;
            else cnt++;
        }
        left_min -= cnt;

        cnt = 0;
        for(int i = x; i < n; i++){
            if(s[i] == '#')break;
            else cnt++;
        }
        right_min -= cnt;
        // cout<<left_min<<" "<<right_min<<" "<<left_max<<" "<<right_max<<endl;
        priority_queue<int,vector<int>,greater<int> > minHeap;
        minHeap.push(left_max);
    minHeap.push(right_max);
    minHeap.push(left_min);
    minHeap.push(right_min);

    minHeap.pop();
    cout<<minHeap.top() + 1<<endl;

    }
    


}