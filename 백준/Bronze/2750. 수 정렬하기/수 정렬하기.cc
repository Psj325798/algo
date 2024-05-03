#include<iostream>
#include<algorithm>
#include<deque>
#include<stack>
#include<string>

using namespace std;

#pragma warning (disable:4996)




int main() {

	ios::sync_with_stdio(false), cin.tie(0);

	int L[1001] = { 0 }, N,temp;


	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> L[i];

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (L[i] > L[j]) {
				temp = L[i];
				L[i] = L[j];
				L[j] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++)
		cout << L[i]<<"\n";

}