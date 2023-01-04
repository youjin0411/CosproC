#include<stdio.h>
#include<stdlib.h>
//ÃÑÇÕ 
int func_a(int arr[], int len) {
	int total = 0;
	for (int i = 0; i < len; i++) {
		total += arr[i];
	}
	return total;
}
//¸¸¾à ÃÑÇÕ totalÀÌ 
int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len + 1);
	int req_total = func_a(arr, arr_len);
	if (total < req_total) {
		for (int i = 0; i < arr_len; i++) {
			result[i] = total / arr_len;
		}
	}
	else {
		for (int i = 0; i < arr_len; i++) {
			result[i] = arr[i];
		}
	}
	return result;
}
int main() {
	int arr[] = { 120, 110, 140, 150 };
	int arr_len = 4;
	int total = 500;
	int *result = solution(total, arr, arr_len);
	printf("%s", "[");
	for (int i = 0; i < arr_len; i++) {
		if (i != 0) printf("%s", ",");
		printf("%d", result[i]);
	}
	printf("%s", "]");
}