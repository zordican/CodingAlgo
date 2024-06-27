#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Create a min_heap with pairs
    priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> min_heap;
    //create a min_heap with 4 element

    // Add elements to the min_heap
    min_heap.push({5, 1});
    min_heap.push({5, 2});
    min_heap.push({8, 3});
    min_heap.push({1, 8});

    // Print the elements in the min_heap
    while (!min_heap.empty()) {
        cout << min_heap.top().first << ": " << min_heap.top().second << endl;
        min_heap.pop();
    }

    return 0;

}