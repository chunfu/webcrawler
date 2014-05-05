#include<iostream>

using namespace std;

int fab(int n) {
	if(n <= 2)
		return 1;
	else
		return fab(n-1) + fab(n-2);
}

class stack {
	int *arr;
	int count;
	int max;
	public:
	stack(int n) {
		arr = new int[n];
		max = n;
		count = 0;
	}
	void push(int e) {
		if(count == max)
			return;
		else {
			arr[count] = e;
			count++;
		}
	}

	int pop() {
		if(count == 0) 
			return -1;
		else {
			count--;
			return arr[count];
		}
	}

	bool empty() {
		return count==0?true:false;
	}

	void print() {
		for(int i = 0; i < count; i++) {
			cout << arr[i] << endl;
		}
	}
};
int fab2(int n) {
	stack* s = new stack(n);
	for(int i = 1; i <= n; i++) {
		if(i <= 2)
			s->push(1);
		else {
			int b1 = s->pop();
			int b2 = s->pop();
			s->push(b1);
			s->push(b1+b2);
		}
	}
	return s->pop();
}
int main() {

	for(int i = 1; i < 10; i++) {
		cout << "fab(" << i << "): " << fab(i) << endl;
		cout << "fab2(" << i << "): " << fab2(i) << endl;
	}

	return 0;
}
