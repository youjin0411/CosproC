#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* solution(int arr[], int arr_len) {
	int left = 0;
	int right = arr_len - 1;
	while (left < right) {
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	return arr;
}
int main() {
	int arr[] = { 1, 4, 2, 3 };
	int arr_len = 4;
	int *result = solution(arr, arr_len);
	printf("%s", "[");
	for (int i = 0; i < arr_len; i++) {
		if (i != 0) printf("%s", ", ");
		printf("%d", arr[i]);
	}
	printf("%s", "]");
}