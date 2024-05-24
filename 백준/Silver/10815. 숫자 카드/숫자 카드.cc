#include <iostream>
#include <vector>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

#pragma warning (disable:4996)

int arr1[500001] = { 0 };
int arr2[500001] = { 0 };
int N, M;

void b_search(int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr1[mid] == k) {
            cout << "1 ";
            return;
        }

        else {
            if (arr1[mid] > k) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
    }
    cout << "0 ";
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> arr2[i];
    }

    sort(arr1, arr1 + N);

    for (int i = 0; i < M; i++) {
        b_search(N, arr2[i]);
    }

    return 0;
}
