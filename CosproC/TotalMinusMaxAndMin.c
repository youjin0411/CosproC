#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//총합을 구하는 함수
int func_a(int arr[], int arr_len) {
	int total = 0;
	for (int i = 0; i < arr_len; i++) total += arr[i];
	return total;
}
//최대값을 구하는 함수
int func_b(int arr[], int arr_len) {
	int max = 0;
	for (int i = 0; i < arr_len; i++) {
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
//최소값 구하는 함수 
int func_c(int arr[], int arr_len) {
	int min = arr[0];
	for (int i = 0; i < arr_len; i++) {
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
int solution(int arr[], int arr_len) {
	int toal = func_a(arr, arr_len);
	int max = func_b(arr, arr_len);
	int min = func_c(arr, arr_len);
	return toal - (max + min);
}
int main() {
	int arr[] = { 10, 20, 30, 13, 45, 90, 98, 89 };
	int arr_len = 8;
	printf("%d", solution(arr, arr_len));
}