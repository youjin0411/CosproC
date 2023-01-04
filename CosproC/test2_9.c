#include<stdio.h>
#include<stdlib.h>

//1부터 m가지의 합을 구한다.
//1부터 n-1까지의 합을 구한다. 
//m까지의 합에서 n-1까지의 합을 뺀다

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