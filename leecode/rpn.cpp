#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>

using namespace std;

class Solution {
	public:
		int evalRPN(vector<string> &tokens) {
			int result;
			int *stack = new int[tokens.size()];
			for(int i = 0; i < tokens.size(); i++)
				stack[i] = 0;
			int count = -1;
			for(vector<string>::iterator i = tokens.begin(); i != tokens.end(); i++) {
				string operand =  *i;
				int num;
				if(!operand.compare("+")) {
					stack[count - 1] = stack[count-1] + stack[count];
					count--;
				} else if(!operand.compare("-")) {
					stack[count - 1] = stack[count-1] - stack[count];
					count--;
				} else if(!operand.compare("*")) {
					stack[count - 1] = stack[count-1] * stack[count];
					count--;
				} else if(!operand.compare("/")) {
					stack[count - 1] = stack[count-1] / stack[count];
					count--;
				} else { //if(operand.size() > 1)
					count++;
					num = atoi(operand.c_str());
					stack[count] = num;
				}
			}

			return stack[count];
		}
};


int main() {
	//["10","6","9","3","+","-11","","/","","17","+","5","+"] 
	vector<string> v;
	v.push_back("10");
	v.push_back("6");
	v.push_back("9");
	v.push_back("3");
	v.push_back("+");
	v.push_back("-11");
	v.push_back("*");
	v.push_back("/");
	v.push_back("*");
	v.push_back("17");
	v.push_back("+");
	v.push_back("5");
	v.push_back("+");
	Solution *sol = new Solution();
	cout << sol->evalRPN(v) << endl;

	return 0;
}
