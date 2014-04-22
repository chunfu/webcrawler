#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>

using namespace std;

class Solution {
	public:
		int evalRPN(vector<string> &tokens) {
			int result;
			string *stack = new string[tokens.size()];
			for(vector<string>::iterator i = tokens.begin(); i != tokens.end(); i++) {
				//cout << atoi(((*i).push_back('f')).c_str());
				string operand =  *i;
				operand.push_back('f');
				cout << atoi(operand.c_str()) << endl;
			}

			return result;
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

	return 0;
}
