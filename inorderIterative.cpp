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

vector<int> preorder(Node *root) //left root right
{
   stack<Node*> s;
   vector<int> ans;
   if(root==nullptr)
   return ans;
   s.push(root);

   while(!s.empty()){
        root=s.top();
        s.pop();
        if(root->right!=nullptr){
        s.push(root->right);}
        if(root->left!=nullptr){
        s.push(root->left);}
        ans.push_back(root->data);
   }
   return ans;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
}