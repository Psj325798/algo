#include<iostream>
#include<algorithm>
#include<deque>
#include<stack>
#include<string>

using namespace std;

#pragma warning (disable:4996)




int main() {

	string S;
	int L;

	
	deque<string>deque;

	while (1) {

		stack<char>stack;
		int ck = 0;

		getline(cin, S);

		if (S == ".")
			break;

		L = S.length();

		for (int i = 0; i < L; i++) {
			if (S[i] == '(') 
				stack.push('(');
			
			else if (S[i] == '[')
				stack.push('[');

			else if (S[i] == ')') {
				if (stack.empty()|| stack.top()!='(')
				{
					deque.push_back("no");
					ck = 1;
					break;
				}
				else if (stack.top() == '(')
					stack.pop();
				

			}

			else if (S[i] == ']') {
				
				if (stack.empty() || stack.top() != '[')
				{
					deque.push_back("no");
					ck = 1;
					break;
				}

				else if (stack.top() == '[')
					stack.pop();
				
				

			}

		}
		if (!stack.empty()&&ck==0) {
			deque.push_back("no");
		}
		else if(ck==0)
			deque.push_back("yes");

		
	}


	while (!deque.empty()) {
		cout << deque.front()<<endl;
		deque.pop_front();
	}

	
	
}