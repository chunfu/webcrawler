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
		int maxDepth(TreeNode *root) {
			if(root != NULL) {
				int depth = 1;
				int d = 1;
				maxDepth(root, d, depth);
				return depth;
			} else
				return 0;
		}

		void maxDepth(TreeNode *root, int d, int &depth) {
			if(d > depth) {
				depth = d;
			}
			//cout << "d: " << d << " depth: " << depth << " val: " << root->val << endl;
			if(root->left) {
				maxDepth(root->left, d+1, depth);
			}
			if(root->right) {
				maxDepth(root->right, d+1, depth);
			}
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
	cout << sol->maxDepth(root) << endl;

	return 0;
}
