#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�Է����� �־��� �迭���� ���� ���� �湮�� ���� ã�´�.
int func_a(int arr[], int arr_len) {
	int max = 0;
	for (int i = 0; i < arr_len; i++) {
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
//ã�� ���� �����ϰ� ������ ����� �̷���� ���ο� �迭�� �����
int* func_b(int arr[], int arr_len, int maxVisit) {
	int* result = (int*)malloc(sizeof(int) * arr_len - 1);
	int j = 0;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] != maxVisit) result[j++] = arr[i];
	}
	return result;
}
//ó���� ���� ���� ���� �湮�� ���� �������� ���� ���� ���� �湮���� ���� ���̸� ���Ѵ�. 
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