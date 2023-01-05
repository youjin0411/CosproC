#include<stdio.h>
#include<stdlib.h>
int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += arr[i] / k; //13 / 4 -> 3 
		if (arr[i] % 4) answer++;
	}
	return answer;
}
int main() {
	int arr[] = { 13, 16, 9, 2, 10, 7 };
	int arr_len = 6;
	printf("%d", solution(arr, arr_len, 4));
}