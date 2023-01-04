#include<stdio.h>
#include<stdlib.h>

//모든 정수의 합을 구한다. 
//최고 점수와 최저 점수를 구한다.
// (모든 점수의 합) - (최고 점수) - (최저 점수)
int* func_a(int s[], int arr_size) {
	int* ret = (int*)malloc(sizeof(int) * 2);
	ret[0] = ret[1] = s[0];
	for (int i = 1; i < arr_size; i++) {
		if (s[i] > ret[0]) ret[0] = s[i];
		if (s[i] < ret[1]) ret[0] = s[i];
	}
	return ret;
}
int func_b(int s[], int arr_size) {
	int ret = 0; 
	for (int i = 0; i < arr_size; i++) ret += s[i];
	return ret;
}
int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len);
	int* score = func_a(scores, scores_len);
	return sum - (score[0] + score[1]);
}
int main() {
	int scores[] = { 100, 100, 34, 100, 100 };
	int scores_len = 5;
	printf("%d", solution(scores, scores_len));
}