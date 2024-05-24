#include <iostream>
#include<queue>

using namespace std;


int main() {
	
	int N, K;
	queue<int>queue;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		queue.push(i);
	}
	cout << "<";
	
	while (queue.size() > 1) {
		for (int i = 1; i < K; i++) { //K개씩
			int tmp = queue.front(); 
			queue.pop(); //원형큐??처럼 생각해서 넣고 빼고
			queue.push(tmp);
		}
		cout << queue.front() << ", ";
		queue.pop();
	}
	cout << queue.front() << ">";

}