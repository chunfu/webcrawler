#include<string>
#include<iostream>

using namespace std;

class Solution {
	public:
		void reverseWords(string &s) {
			string rev_s;
			for(int i = s.size()-1; i >= 0;) {
				while(s[i] == ' ' && i >= 0)
					i--;
				if(i < 0) break;
				if(!rev_s.empty()) rev_s.push_back(' ');
				string word;
				while(s[i] != ' ' && i >= 0) {
					word.push_back(s[i]);
					i--;
				}
				reverse(word.begin(), word.end());
				rev_s.append(word);
			}
			s = rev_s;
		}
};

int main() {
	Solution *sol = new Solution();
	string s = " the sky is blue ";
	sol->reverseWords(s);
	cout << s;

}
