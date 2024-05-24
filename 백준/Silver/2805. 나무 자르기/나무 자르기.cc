#include <iostream>
#include<queue>
#include<algorithm>
#include<math.h>

using namespace std;
int num = 0;



int main() {

	long long N, M, answer = 0, tree = 0;

	cin >> N >> M;

	vector<long long>V(N, 0); //0으로 초기화

	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}

	sort(V.begin(), V.end());//우선 정렬

	//이분탐색이니 절반씩 잘라서 가능한 가장 높은 높이 찾기 절반 자르고 또 절반 자르고

	long long low, high, mid;
	low = 0; high = V[N-1];
	

	while (low <= high) {
		long long SUM = 0; //나무 길이
		mid = (low + high) / 2; //절반씩 잘라나감

		for (int i = 0; i < N; i++) {
			if (V[i] >= mid) {
				SUM += V[i] - mid;
			}
		}
		if (SUM >= M) {
			answer = mid;
			
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	cout << answer;

}

