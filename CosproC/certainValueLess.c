#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int solution(int arr[], int arr_len) {
	int counter = 0; 
	int total = 0; 
	double avg = 0;
	for (int i = 0; i < arr_len; i++) {
		total += arr[i];
	}
	avg = total / arr_len;
	for (int i = 0; i < arr_len; i++) {
		if (avg >= arr[i]) counter++;
	}
	return counter; 
}
int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr_len = 10;
	printf("%d", solution(arr, arr_len));
}