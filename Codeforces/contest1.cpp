#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int> x;
        for(int i = 0;i<3;i++){
            int temp;
            cin>>temp;
            x.push_back(temp);
        }
    
        int sum1 = abs(x[0]-x[1])+abs(x[0]-x[2]);
        int sum2 = abs(x[0]-x[1])+abs(x[1]-x[2]);
        int sum3 = abs(x[2]-x[1])+abs(x[0]-x[2]);
       int minimum = min(sum1,sum2);
       minimum=min(minimum,sum3);
       cout<<minimum<<endl;

    }
}