#include<stdio.h>
#include<stdlib.h>
//�迭���� ���� ���� �湮�� �� ã��
//���� ���� �湮�� ���� ������ �迭�� �����.
//���ο� �迭������ ���� ū �湮�� ���� ����
//ó�� ���� ���� �湮�� �� - ���ο� ���� ū �湮�� �� ���̸� ����
int func_a(int arr[], int arr_len) {
	int max = 0;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int* func_b(int arr[], int arr_len, int max) {
	int* visit = (int*)malloc(sizeof(int) * arr_len);
	int i = 0; 
	for (int j = 0; j < arr_len; j++) {
		if (arr[i] != max) visit[i++] = arr[i];
	}
	return visit;
} 
int func_c(int a, int b) {
	return (a > b) ? a - b : b - a;
}
int solution(int visitor[], int n) {
	int max_first = func_a(visitor, n);
	int* visitor_removed = func_b(visitor, n, max_first);
	int max_second = func_a(visitor_removed, n-1);
	int answer = func_c(max_first, max_second);
	return answer;
}
int main() {
	int visitor[] = { 34, 65, 3, 8, 90, 23 };
	int n = 6;
	printf("%d", solution(visitor, n));
}