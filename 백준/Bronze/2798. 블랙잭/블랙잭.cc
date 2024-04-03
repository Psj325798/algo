#include <string.h>
#include<iostream>
#include<algorithm>
#include<deque>

using namespace std;

#pragma warning (disable:4996)



int main() {

	int N,M, L[101] = { 0 };
	int sum = 0, max = 0;

	cin >> N>>M;

	for (int i = 0; i < N; i++) {
		cin >> L[i];
	}

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = L[i] + L[j] + L[k];
				if (sum <= M && sum > max) {
					max = sum;

					if (max == M)
						break;
				}
			}
			if (max == M)
				break;
		}
		if (max == M)
			break;
	}
	cout << max;
	

	
}