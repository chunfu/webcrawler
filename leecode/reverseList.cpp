#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

void reverse_list(Node* root) {
	if(!root)
		return;
	Node* next = root->next;
	root->next = NULL;
	while(next) {
		Node* next_next = next->next;
		next->next = root;
		root = next;
		next = next_next;
	}
}

void print_list(Node* root) {
	while(root) {
		cout << root->data << " " ;
		root = root->next;
	}
	cout << endl;
}

int main() {
	Node a = {1, 0};
	Node b = {2, &a};
	Node c = {3, &b};
	Node d = {4, &c};
	print_list(&d);
	reverse_list(&d);
	print_list(&a);


	return 0;
}
