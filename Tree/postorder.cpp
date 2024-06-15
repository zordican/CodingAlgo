#include<iostream>
#include<bits/stdc++.h>
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

void postorder(struct Node* node){
    if(node==nullptr)
    return;
   
    postorder(node->left);
     cout<<node->data;
    postorder(node->right);
}

int main()
{
    struct Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

}