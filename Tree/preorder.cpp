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

void preorder(struct Node* node){
    if(node==nullptr)
    return;
    cout<<node->data;
    preorder(node->left);
    preorder(node->right);
}

int main()
{
    bool a = (4==4);
    cout<<a<<endl;

}