#include<stdio.h>
#include<stdlib.h>

//1���� m������ ���� ���Ѵ�.
//1���� n-1������ ���� ���Ѵ�. 
//m������ �տ��� n-1������ ���� ����

int func(int k) {
	int answer = 0;
	for (int i = 1; i <= k; i++) {
		answer += i;
	}
	return answer;
}
int solution(int m, int n) {
	int sum_to_m = func(m);
	int sum_to_n = func(n - 1);
	int answer = sum_to_m - sum_to_n;
	return answer;
}
int main() {
	int m = 5;
	int n = 2;
	printf("%d", solution(m, n));
}