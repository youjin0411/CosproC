#include<stdio.h>
#include<stdlib.h>
int solution(int arr[], int arr_len) {
	int answer = 0;
	int price;
	for (int i = 0; i < arr_len; i++) {
		price = arr[i];
		if (i % 4 == 0) {
			price *= 0.5;
		}
		answer += price;
	}
	return answer;
}
int main() {
	int arr[] = {100, 500, 200, 400, 300};
	int arr_len = 5;
	printf("%d", solution(arr, arr_len));
}