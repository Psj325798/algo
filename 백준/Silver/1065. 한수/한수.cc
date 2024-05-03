#include<iostream>
#include<algorithm>
#include<deque>
#include<stack>
#include<string>

using namespace std;

#pragma warning (disable:4996)




int main() {

	ios::sync_with_stdio(false), cin.tie(0);
	
	int N, count=99;

	cin >> N;
	//1~9까지는 초항 뿐인 등차수열 10~99까지도 1 0 1 1 1 2 1 3... 즉 100미만 1~99는 모두 자리수가 등차수열
	if (N < 100)
		cout << N;

	else {
		for (int i = 100; i <= N; i++) {
			if ((i / 100 - (i / 10) % 10) == ((i / 10) % 10 - i % 10))
				count++;
		}

		cout << count;
	}



}