#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�迭�� ����ִ� �� ȸ����ȣ�� ������ ����
// ���� ���� �ۼ��� ȸ���� �� ������ ���Ѵ�., 
// ���� ���� �ۼ��� ȸ���� �� ������ ���Ѵ�.
// ���� ���� �ۼ� ������ ���� ���� �ۼ��� �������� � �� ������ ���Ѵ�. 

//�迭�� ����ִ� �� ȸ����ȣ�� ������ �츮�� �Լ�
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001);
	memset(counter, 0, sizeof(int) * 1001);
	//for (int i = 0; i < 1001; i++) counter[i] = 0;
	for (int i = 0; i < arr_len; i++) {
		counter[arr[i]]++;
	}
	return counter;
}
//�ִ밪 ���ϱ�
int func_b(int arr[], int arr_len) {
	int max = 0;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
//�ּҰ� ���ϱ�
int func_c(int arr[], int arr_len) {
	int min = 1001;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] < min && arr[i] != 0) min = arr[i];
	}
	return min;
}
// solution �Լ�
int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, 1001);
	int min_cnt = func_c(counter, 1001);
	printf("�ִ밪�� ���� : %d\n", max_cnt);
	printf("�ּҰ��� ���� : %d\n", min_cnt);
	return max_cnt / min_cnt;
}
int main() {
	int arr[] = {1, 100, 100, 100, 1 };
	int arr_len = 5;
	printf("%d", solution(arr, arr_len));
}