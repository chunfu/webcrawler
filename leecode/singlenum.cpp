#include<iostream>
#include<stdlib.h>

using namespace std;

class Solution {
	public:
		int singleNumber(int A[], int n) {
			int single = 0;
			if(n % 2 == 0)
				return -1;
			for(int i = 0; i < n; i++) {
				single = single ^ A[i];
			}
			return single;
		}
};


int main() {
	int n = 9;
	int A[] = {1,1,3,4,5,6,4,6,3};
	Solution *sol = new Solution();
	cout << sol->singleNumber(A, n) << endl;

	return 0;
}
