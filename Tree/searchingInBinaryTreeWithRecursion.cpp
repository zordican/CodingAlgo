#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    Node* searchBST(Node* root, int val) {
        if(root==NULL)
        return NULL;
        if(root->val==val)
        return root;
        if(val>root->val)
        return searchBST(root->right,val);
        else
        return searchBST(root->left,val); 
    }
};

struct Node{
    int val;
    struct Node* left;
    struct Node* right;

    Node(int data){
        val=data;
        left=right=nullptr;
    }

};

int main()
{

}