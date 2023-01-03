#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int)* 1001);
	//동적 배열 counter 생성
	for (int i = 0; i < 1001; i++) //배열 초기화
		counter[i] = 0;
	for (int i = 0; i < arr_len; i++) 
		counter[arr[i]]++;
	return counter;
}
int func_b(int arr[], int arr_len) {
	int ret = 0; 
	for (int i = 0; i < arr_len; i++) {
		if (ret < arr[i])
			ret = arr[i];
	}
	return ret;
}
int func_c(int arr[], int arr_len) {
	const int INF = 1001; //별의미없는 코드
	int ret = INF;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] != 0 && ret > arr[i]) {
			ret = arr[i];
		}
	}
	return ret;
}
int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, arr_len);
	int min_cnt = func_c(counter, arr_len);
	return max_cnt / min_cnt;
}
int main() {
	int arr[] = { 1, 2, 2,1,1,1 };
	int arr_len = 6;
	printf("%d", solution(arr, arr_len));
}