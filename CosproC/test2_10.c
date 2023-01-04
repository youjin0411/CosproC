#include<stdio.h>
#include<stdlib.h>
int* solution(int arr[][4], int n) {
	int* answer = (int*)malloc(sizeof(int) * (n + 1));
	int total = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			total += arr[i][j];
		}
	}
	int k = 0;
	int avg = total / (n * 4);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] < avg) {
				answer[k++] = arr[i][j];
			}
		}
	}
	return answer;
}
int main() {
	int arr[][4] = {
		{5, 12, 4, 31},
		{24, 13, 11, 2},
		{43, 44, 19, 26},
		{33, 65, 20, 21}
	};
	int n = 4;
	int* result = solution(arr, n);
	printf("%s", "[");
	for (int i = 0; i < sizeof(result); i++) {
		if (i != 0) printf("%s", ",");
		printf("%d", result[i]);
	}
	printf("%s", "]");
}