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
		}
};


int main() {
	Solution *sol = new Solution();
	cout << sol->maxDepth() << endl;

	return 0;
}
