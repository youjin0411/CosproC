#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//총합을 구하는 함수
int func_a(int a[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++) total += a[i];
	return total;
}
//평균과의 차이가 몇점인지 구하는 함수
int func_b(int a, int b) {
	return (a < b) ? b - a : a - b;
}

//평균과 차이가 가장 많이 나는 수를 구하는 함수
int func_c(int a, int b[], int n) {
	int diff;
	int max_diff = 0;
	int max_score = 0;
	for (int i = 0; i < n; i++) {
		diff = func_b(a, b[i]); //평균과의 차이
		if (max_diff < diff) {
			max_diff = diff;
			max_score = b[i];
		}
	}
	return max_score;
}
int solution(int scores[], int scores_len) {
	int answer = 0;
	int total = func_a(scores, scores_len);
	int avg = total / scores_len; //평균
	int max_score = func_c(avg, scores, scores_len); //평균과 최대로 차이나는 점수
	answer = max_score;
	return answer;
}
int main() {
	int scores[] = { 10, 90, 50, 30, 60 };
	int scores_len = 5;
	printf("%d", solution(scores, scores_len));
}