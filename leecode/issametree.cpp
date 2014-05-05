#include<iostream>
#include<stdlib.h>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
	public:
		bool isSameTree(TreeNode *p, TreeNode *q) {
			if(p->val == q->val) {
				return true && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
			} else
				return false;

		}
};


int main() {
	TreeNode *root = new TreeNode(3);
	TreeNode *n1 = new TreeNode(9);
	TreeNode *n2 = new TreeNode(20);
	root->left = n1;
	root->right = n2;
	TreeNode *n3 = new TreeNode(15);
	n2->left = n3;
	TreeNode *n4 = new TreeNode(7);
	n2->right = n4;
	//TreeNode *n5 = new TreeNode(1);
	//n4->right = n5;
	
	
	Solution *sol = new Solution();
	//cout << sol->maxDepth(root) << endl;

	return 0;
}
