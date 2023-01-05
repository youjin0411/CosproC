#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int arr[], int arr_len, int payload) {
	int cnt = 0;
	int weight = 0;
	int diff = 0;
	for (int i = arr_len - 1; i >= 0; i--) {
		diff = payload - weight;
		if (diff  >= arr[i]) {
			weight += arr[i];
			cnt++;
		}
	}
	if (weight != payload)
		cnt = 0;
	return cnt;
}
int main() {
	int arr[] = { 1, 2, 3, 5, 7, 11, 13, 17,19, 23 };
	int arr_len = 10;
	int payload = 28;
	printf("%d", solution(arr, arr_len, payload));
}