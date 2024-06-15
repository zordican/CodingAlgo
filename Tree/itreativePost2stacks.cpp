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

vector<int> postOrder(Node *root)
{
    stack<Node *> s1,s2;
    Node *node;

    vector<int> ans;
    if (root == nullptr)
        return ans;

    s1.push(root);

    while (!s1.empty())
    {
        node = s1.top();
        s1.pop();
        s2.push(node);
        if (node->right != nullptr)
            s1.push(node->right);
        if (node->left != nullptr)
            s1.push(node->left);
    }
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
}