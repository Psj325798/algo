#include <iostream>
#include <deque>
#include<string>
#include<stack>
#include<stdio.h>
using namespace std;

#pragma warning (disable:4996)


int main() {

	long S, N=0, sum=0;


	cin >> S;

	deque<int> L;

	for (int i = 1; i <= S; i++) {
		sum += i;
		N++;
		if (sum == S) {
			cout << N;
			break;
		}
		else if (sum > S) {
			cout << N - 1;
			break;
		}
	}


}