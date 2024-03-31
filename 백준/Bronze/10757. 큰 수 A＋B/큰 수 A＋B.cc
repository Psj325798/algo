#include <string.h>
#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

#pragma warning (disable:4996)

int main() {

	string A, B;
	stack<int> C;
	int upper = 0;
	int a,b,len = 0;

	cin >> A >> B;

	if (B.length() > A.length())
		swap(A, B);
	len = A.length();
//무조건 A가 긺

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	for (int i = 0; i < len; i++) {
		a = A[i] - '0';
		if (B.length() <= i)
			b = 0;
		else
			b = B[i] - '0';
		
		C.push(a + b + upper);
		if (C.top() >= 10) {
			upper = C.top() / 10;
			C.top() -= upper * 10;
		}
		else
			upper = 0;
	}

	if (upper!=0) {
		C.push(upper);
	}


	while (!C.empty()) {
		cout << C.top();
		C.pop();
	}

}