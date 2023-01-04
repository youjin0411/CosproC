#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* solution(int score[], int score_len) {
	int* grade = (int*)malloc(sizeof(int) * score_len);
	for (int i = 0; i < score_len; i++) {
		grade[i] = 0;
	}
	for (int i = 0; i < score_len; i++) {
		if (score[i] >= 85) grade[0]++;
		else if (score[i] >= 70) grade[1]++;
		else if (score[i] >= 55) grade[2]++;
		else if (score[i] >= 40) grade[3]++;
		else grade[4]++;
	}
	return grade;
}
int main() {
	int score[] = { 90, 89, 38, 78, 56, 100 };
	int score_len = 6;
	int* result = solution(score, score_len);
	printf("%s", "[");
	for (int i = 0; i < score_len; i++) {
		if (i != 0) printf("%s", ",");
		printf("%d", result[i]);
	}
	printf("%s", "]");
}