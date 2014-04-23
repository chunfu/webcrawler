#include<iostream>
#include<stdlib.h>

using namespace std;

class Solution {
	public:
		int singleNumber(int A[], int n) {
			if(n % 2 == 0)
				return -1;
		}
};


int main() {
	int n = 9;
	int A[n];
	Solution *sol = new Solution();
	sol->singleNumber();

	return 0;
}
