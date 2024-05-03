#include <iostream>
#include <queue>
using namespace std;

#pragma warning (disable:4996)


int main() {
	queue<int> q;
	queue<int> answer;
	int N;
	string command;
	int num;
	int result = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> command;

		if (command == "push") {
			cin >> num;
			q.push(num);

		}

		else if (command == "pop") {
			if (q.size() == 0) {
				result = -1;
				answer.push(result);
			}
			else {
				result = q.front();
				answer.push(result);
				q.pop();
			}
		}

		else if (command == "size") {
			answer.push(q.size());
		}

		else if (command == "empty") {
			if (q.size() == 0) {
				result = 1;
				answer.push(result);
			}
			else {
				result = 0;
				answer.push(result);
			}
		}

		else if (command == "front") {
			if (q.size() == 0) {
				result = -1;
				answer.push(result);
			}
			else {
				result = q.front();
				answer.push(result);
			}
		}

		else if (command == "back") {
			if (q.size() == 0) {
				result = -1;
				answer.push(result);
			}
			else {
				result = q.back();
				answer.push(result);
			}
		}
	}

	while (!answer.empty()) {
		cout << answer.front() << "\n";
		answer.pop();

	}

	
}