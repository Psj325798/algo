#include <string.h>
#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;

#pragma warning (disable:4996)

int main() {
//회문으로 착각함 내일해야지

	string A, B;
	deque<string> answer;

	while (1) {
		cin >> A;
		if (A == "0")
			break;
		B = A;
		reverse(B.begin(), B.end());

		if (A == B)
			answer.push_back("yes");
		else
			answer.push_back("no");
	}

	while (!answer.empty()) {
		cout << answer.front()<<endl;
		answer.pop_front();
	}
}