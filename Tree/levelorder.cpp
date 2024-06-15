#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

Node* buildTree(vector<int>& nums) {
    if (nums.empty()) {
        return NULL;
    }
    Node* root = new Node(nums[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < nums.size()) {
        Node* curr = q.front();
        q.pop();
        if (i < nums.size()) {
            if(nums[i]==0){
                i++;
            }
            else{
                curr->left = new Node(nums[i++]);
                q.push(curr->left);
            }
        }
        if (i < nums.size()) {
            if(nums[i]==0){
                i++;
            }
            else{
                curr->right = new Node(nums[i++]);
                q.push(curr->right);
            }
        }
    }
    return root;
}

vector<vector<int>> levelOrder(Node *root)
{
    vector<vector<int>> ans; //retun the answer in row and column format
    if (root == NULL)
        return ans;
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node->left != NULL) // Check if node->left is not NULL
                q.push(node->left);
            if (node->right != NULL) // Check if node->right is not NULL
                q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}



int main()
{
    vector<int> v={1,2,3,4,5,0,6,7,0,0,0,0,8};
    Node* node=buildTree(v);
    vector<vector<int>> ans=levelOrder(node);

    cout<<ans.size()<<ans[3].size()<<endl;
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}