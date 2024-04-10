#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define MAX 1000000
int stack[MAX];
int top = -1;

//스택이 비어있는지 검사
int is_Empty(){
	if (top == -1) return 1;
	else return 0;
}

//스택이 가득 차있는지 검사
int is_full() {
	if (top == (MAX-1)) return 1;
	else return 0;
}

//스택에 데이터 삽입
void push(int k) {
	if (is_full() == 1)
		cout << "Overflow";
	else {
		top++;
		stack[top] = k;
	}
}

//스택의 맨 위 데이터 리턴 후 삭제
int pop() {
	if (is_Empty() == 1)
		return -1;
	else {
		int x = stack[top];
		top--;
		return x;
	}
}

//스택의 맨 위 데이터 리턴 (삭제는 하지 않음)
int peek() {
	if (is_Empty() == 1) return -1;
	else return stack[top];
}


//main함수
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		int num;

		//push가 입력될 경우 정수를 추가로 입력받기
		if (s == "push") {
			cin >> num;
			push(num);
		}
        
		else if (s == "pop")
			cout << pop() << "\n";
            
		//배열의 인덱스는 0부터 시작하므로 top+1            
		else if (s == "size")
			cout << top + 1 << "\n";
            
		else if (s == "empty")
			cout << is_Empty() << "\n";
            
		else if (s == "top")
			cout << peek() << "\n";
	}
}