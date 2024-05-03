#include <iostream>
#include <deque>
#include<string>
#include<stack>
using namespace std;

#pragma warning (disable:4996)


int main() {

	int N;
	string S;
	
	deque<string> answer;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> S;
		int ck = 0;
		stack<char>stack;
		for (int j = 0; j < S.length(); j++)
		{
			if (S[j] == '(')
				stack.push('(');
			else if (S[j] == ')') {
				if (stack.empty())
				{
					answer.push_back("NO");
					ck = 1;
					break;
				}
				else
					stack.pop();
			}
			
		}
		if(ck==0&&stack.empty())
			answer.push_back("YES");
		else if(ck==0)
			answer.push_back("NO");
		
	}

	while (!answer.empty()) {
		cout << answer.front() << "\n";
		answer.pop_front();
	}
	
}