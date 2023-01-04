#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* solution(int arr[], int arr_len) {
	int* answer = (int*)malloc(sizeof(int) * arr_len);
	memset(answer, 0, sizeof(int) * arr_len);
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] >= 85) answer[0]++;
		else if (arr[i] >= 70) answer[1]++;
		else if (arr[i] >= 55) answer[2]++;
		else if (arr[i] >= 40) answer[3]++;
		else answer[4]++;
	}
	return answer;
}
int main() {
	int arr[] = { 100, 75, 57, 47, 2 };
	int arr_len = 5;
	int* result = solution(arr, arr_len);
	printf("%s", "[");
	for (int i = 0; i < arr_len; i++) {
		if (i != 0) printf("%s", ",");
		printf("%d", result[i]);
	}
	printf("%s", "]");
}