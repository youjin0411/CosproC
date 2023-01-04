#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//입력으로 주어진 배열에서 가장 많은 방문객 수를 찾는다.
int func_a(int arr[], int arr_len) {
	int max = 0;
	for (int i = 0; i < arr_len; i++) {
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
//찾은 값을 제외하고 나머지 값들로 이루어진 새로운 배열을 만든다
int* func_b(int arr[], int arr_len, int maxVisit) {
	int* result = (int*)malloc(sizeof(int) * arr_len - 1);
	int j = 0;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] != maxVisit) result[j++] = arr[i];
	}
	return result;
}
//처음에 구한 가장 많은 방문객 수와 다음으로 구한 가장 많은 방문객의 수의 차이를 구한다. 
int func_c(int maxVisit, int remainMaxVisit) {
	if (maxVisit > remainMaxVisit) return maxVisit - remainMaxVisit;
	else return remainMaxVisit - maxVisit;
}
int solution(int arr[], int arr_len) {
	int maxVisit = func_a(arr, arr_len);
	int* remain = func_b(arr, arr_len, maxVisit);
	int remainMaxVisit = func_a(remain, arr_len-1);
	int answer = func_c(maxVisit, remainMaxVisit);
	return answer;
}
int main() {
	int arr[] = {50,35, 78, 91, 85};
	int arr_len = 5;
	printf("%d", solution(arr, arr_len));
}