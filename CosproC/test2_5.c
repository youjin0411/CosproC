#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//배열에 들어있는 각 회원번호의 개수를 센다
// 가장 많이 작성한 회원의 글 개수를 구한다., 
// 가장 적게 작성한 회원의 글 개수를 구한다.
// 가장 많이 작성 개수가 가장 적게 작성한 개수보다 몇개 더 많은지 구한다. 

//배열에 들어있는 각 회원번호의 개수를 살리는 함수
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001);
	memset(counter, 0, sizeof(int) * 1001);
	//for (int i = 0; i < 1001; i++) counter[i] = 0;
	for (int i = 0; i < arr_len; i++) {
		counter[arr[i]]++;
	}
	return counter;
}
//최대값 구하기
int func_b(int arr[], int arr_len) {
	int max = 0;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
//최소값 구하기
int func_c(int arr[], int arr_len) {
	int min = 1001;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] < min && arr[i] != 0) min = arr[i];
	}
	return min;
}
// solution 함수
int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, 1001);
	int min_cnt = func_c(counter, 1001);
	printf("최대값의 개수 : %d\n", max_cnt);
	printf("최소값의 개수 : %d\n", min_cnt);
	return max_cnt / min_cnt;
}
int main() {
	int arr[] = {1, 100, 100, 100, 1 };
	int arr_len = 5;
	printf("%d", solution(arr, arr_len));
}