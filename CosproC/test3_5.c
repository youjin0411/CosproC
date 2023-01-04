#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int solution(int mho_arr[], int mhe_arr[], int arr_len) {
	int mho_cnt = 0;
	int mhe_cnt = 0;
	int result = -1;
	for (int i = 0; i < arr_len; i++) {
		if (mho_arr[i] > mhe_arr[i]) mho_cnt++;
		else if (mho_arr[i] < mhe_arr[i]) mhe_cnt++;
	}
	if (mho_cnt > mhe_cnt) result = 1;
	else if (mho_cnt > mhe_cnt) result = -1;
	else result = 0;
	return result; 
}
int main() {
	int mho_arr[] = { 2, 1, 9, 6 };
	int mhe_arr[] = { 4, 1, 4, 7 };
	int arr_len = 4;
	printf("%d", solution(mho_arr, mhe_arr, arr_len));
}