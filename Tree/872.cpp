#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree(vector<int>& nums) {
	if (nums.empty()) {
		return NULL;
	}
	TreeNode* root = new TreeNode(nums[0]);
	queue<TreeNode*> q;
	q.push(root);
	int i = 1;
	while (i < nums.size()) {
		TreeNode* curr = q.front();
		q.pop();
		if (i < nums.size()) {
			curr->left = new TreeNode(nums[i++]);
			q.push(curr->left);
		}
		if (i < nums.size()) {
			curr->right = new TreeNode(nums[i++]);
			q.push(curr->right);
		}
	}
	return root;
}

// void printTree(TreeNode* root) {
// 	if (!root) {
// 		return;
// 	}
// 	printTree(root->left);
// 	cout << root->val << " ";

// 	printTree(root->right);
// }

void traverse(vector<int>& v,TreeNode* node){
    if(node==nullptr)return;
    if(node->left==nullptr)v.push_back(node->val);

    traverse(v,node->left);
    traverse(v,node->right);
}

bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        traverse(v1,root1);
        traverse(v2,root2);

        if(v1==v2)return true;
        else return false;
    }

int main() {
	vector<int> nums1 = { 119,113,0,11,30,43,76,15,60,67,74};
	vector<int> nums2 = { 11,69,60,115,66,15,60,67,74,0,76 };
	TreeNode* root1 = buildTree(nums1);
	TreeNode* root2 = buildTree(nums2);

    bool ans = leafSimilar(root1,root2);

    cout<<ans<<endl;
	
	return 0;
}
