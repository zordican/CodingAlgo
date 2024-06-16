#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subSequence(int index, vector<int>& v,vector<int> arr){
    if(index>=arr.size()){
        for(auto it:v){
            cout << it <<" ";
        }
        cout<<endl;
        return;
    }
    //Pick or not pick condition
    v.push_back(arr[index]);
    subSequence(index+1,v,arr);
    v.pop_back();
    //not pick call
    subSequence(index+1,v,arr);
}

int main()
{
    vector<int> arr = {3,1,2};
    vector<int> v;
    int index = 0;

    subSequence(index,v,arr);

}