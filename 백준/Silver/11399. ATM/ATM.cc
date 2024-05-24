#include <iostream>
#include<queue>
#include<algorithm>

using namespace std;


int main() {
	
	int N, answer = 0, ck = 0;
	int time[1001] = { 0 };

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> time[i];

	sort(time, time + N);

	for (int i = 0; i < N; i++) {
		ck += time[i];
		answer += ck;
	}
	
	cout << answer;
}