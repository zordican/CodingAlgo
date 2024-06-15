#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=right=nullptr;
    }
};

vector<int> preInPostTraversal(Node *root)
{
    stack<pair<Node *, int>> st;
    st.push({root, 1});
    vector<int> pre, in, post;
    if (root == NULL)
        return;
    while (!st.empty())
    {
        auto it = st.top();
        st.pop();
        // this is part of pre
        // increment 1 to 2
        // push the left side of the tree
        if (it.second == 1)
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->left != NULL)
            {
                st.push({it.first->left, 1});
            }
        }
        // this is a part of in
        // increment 2 to 3
        // push right
        else if(it.second == 2)
        {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->right != NULL)
            {
                st.push({it.first->right, 1});
            }
        }
        // don't push it back again
        else
        {
            post.push_back(it.first->data);
        }
    }
}

int main()
{
    return 0;
}