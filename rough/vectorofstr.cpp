#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    v.push_back("rishu4ever9@mail.com");
    v.push_back("rishu4edfdiver9@gmail.com");
    v.push_back("rishusfs4ever9@yahoo.com");
    v.push_back("anshf@gmail.com");
    v.push_back("rishu");

    //print vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    //sort vector
    sort(v.begin(),v.end());
    
    //print vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
        
    
}