#include <iostream>
#include <deque>
#include<string>
#include<stack>
using namespace std;

#pragma warning (disable:4996)


int main() {

	int N,num;
	deque<int>A, B;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		A.push_back(num);
	}
	
	for (int i = 1; i <= N; ) {
		if (!A.empty()&& A.front() == i) {
			A.pop_front();
			i++;
		}
		else {
			if (!B.empty() && B.back() == i){
				B.pop_back(); i++;
			}
			else
			{
				B.push_back(A.front());
				A.pop_front();
			}
		}
		if (A.empty() && !B.empty() && B.back() != i) {
			cout << "Sad";
			return 0;
		}
	}
	cout << "Nice";
}