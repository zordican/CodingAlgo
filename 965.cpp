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
            if(nums[i]==0){
                curr->left = nullptr;
                i++;
            }
			else{curr->left = new TreeNode(nums[i++]);}
			q.push(curr->left);
		}
		if (i < nums.size()) {
             if(nums[i]==0){
                curr->right = nullptr;
                i++;
            }
			else{curr->right = new TreeNode(nums[i++]);}
			q.push(curr->right);
		}
	}
	return root;
}

void printTree(TreeNode* root) {
	if (!root) {
		return;
	}
	printTree(root->left);
	cout << root->val << " ";

	printTree(root->right);
}

bool traverse(TreeNode* root,stack<int>& s){
       if(root==nullptr)return true;
       bool a=true;
       
       if(!s.empty()){
        if(s.top()!=root->val){a=false;cout<<s.top()<<" ";}
        else {a=true;cout<<s.top()<<" ";}
       s.push(root->val);
       }
       return a&&traverse(root->left,s)&&traverse(root->right,s);
    }

int main() {
	vector<int> nums = {2,2,2,5,2};
	TreeNode* root = buildTree(nums);
	stack<int> s;
        
    bool a = traverse(root,s);
    cout<< a<<endl;
}
