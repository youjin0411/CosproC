#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int func_a(int k) {
	int answer = 0; 
	for (int i = 0; i < k; i++) answer += i;
	return answer;
}
int solution(n, m) {
	int sum_to_m = func_a(m);
	int sum_to_n = func_a(n-1);
	int answer = sum_to_m - sum_to_n;
	return answer;
}

int main() {
	int n = 2;
	int m = 4;
	printf("%d", solution(n, m));
}