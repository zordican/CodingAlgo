#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 vector<vector<int>> v;
 v.push_back({1,2,3});   
 v.push_back({4,5,6});   
 v.push_back({7,8,9});   

 cout<<v[0][0]<<" "<<v[0][1]<<" "<<v[0][2]<<" "<<v.size()<<endl;
}