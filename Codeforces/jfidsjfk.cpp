#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(int n,int s,int m){
     

        vector<pair<int,int> > v;

        for (int i = 0; i < n; i++)
        {
            int a,b;
            cin>>a>>b;
            v.push_back({a , b});
        }

        sort(v.begin(),v.end());

       if(v[0].first >= s){

        cout<<"YES"<<endl;
        return;

       }

       int left = v[0].second;

       for (int i = 1; i < n; i++)
       {
        if(v[i].first>left){
            if(v[i].first-left>=s){
                cout<<"YES"<<endl;
                return;
            }
        }
        left=max(left,v[i].second);
       }

       if(m-left>=s){
       cout<<"YES"<<endl;
       return;
       }

        cout<<"NO"<<endl;
        retun;
}

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
         int n,s,m;
        cin>>n>>s>>m;
       solve(n,s,m);

      

    }
}