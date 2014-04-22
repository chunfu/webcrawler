#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>

using namespace std;

class Solution {
	public:
		int evalRPN(vector<string> &tokens) {
			string *stack = new string[tokens.size()];
			for(vector<string>::iterator i = tokens.begin(); i != tokens.end(); i++) {
				if(atoi((*i).c_str()) {
				cout << *i << endl;
			}
		}
};


int main() {
	vector<string> v;
	v.push_back("2");
	v.push_back("1");
	v.push_back("+");
	v.push_back("3");
	v.push_back("*");
	Solution *sol = new Solution();
	sol->evalRPN(v);

}
