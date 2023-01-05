#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int* solution(int arr[], int arr_len) {
	int* answer = (int*)malloc(sizeof(int) * 3); //심리학, 영상이해, 이산수학
	for (int i = 0; i < 3; i++) {
		answer[i] = 0;
		for (int k = 0; k < 4; ++k) { // 0 1 2 3
			answer[i] += arr[k + (i * 4)]; //  0,1,2,3  |  (0 + 1* 4), (1 + 1 * 4),(2 + 1 * 4),(3 + 1 * 4)   |  (0 + 2* 4), (1 + 2 * 4),(2 + 2 * 4),(3 + 2 * 4)
		}
	}
	return answer;
}
int main() {		
	int arr[] = { 8, 5, 3, 5, 6, 7, 3, 4, 5, 6, 7, 8 };
	int arr_len = 12;
	int* result = (solution(arr, arr_len));
	for (int i = 0; i < 3; i++) {
		if (i != 0) printf("%s", ",");
		printf("%d", result[i]);
	}
}