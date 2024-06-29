#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;

    st.insert(1);
    st.insert(2);
      st.insert(5);
    st.insert(2);
    st.insert(3);
    st.insert(4);
  
    st.insert(5);

    for(auto i:st)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // auto it = st.find(3);
    // if(it == st.end())
    // {
    //     cout<<"Not found"<<endl;
    // }
    // else
}