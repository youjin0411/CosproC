#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ּҰ� ã�´�. 
//�� �迭������ k��°�� ū �ִ밪�� ã�´�. 
int func_a(int arr[][4], int n) { //arr[][4] ������ ���̴� 4���� ������ �Բ� ��������� �Ѵ�. 
	int answer = arr[0][0]; //�ּҰ��� ���ϱ� ���� 0������ ���� ���� �����ϰ� ������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//�ּҰ� ���ϴ� �˰���
			if (answer > arr[i][j]) answer = arr[i][j];
		}
	}
	return answer;
}
//�ּҰ��� ������ �迭�� ��´�. 
int func_b(int a[][4], int n, int del) {
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			//�ս� ���� �ּҰ��� �迭���� ���� �����ϴٸ� �ּҰ��� ���� 1000���� �������־� �ּҰ����� ���ܽ�Ŵ 
			if (del == a[r][c]) {
				a[r][c] = 1000;
				return 1;
			}
		}
	}
	return 0;
}
int solution(int arr[][4], int n, int k) {
	int answer = 0; //k��°�� ���� �� 
	int min; //�ּҰ� 
	for (int i = 1; i <= k; i++) { //k����ŭ �ݺ�
		min = func_a(arr, n); //�ּҰ��� ���� -> ���� ���� �ּҰ� ���� -> �� ��° �ּҰ� ���� -> k��°�� �ּҰ� ����
		func_b(arr, n, min); //�ּҰ��� ���ܽ�Ŵ -> ���� ���� �ּҰ� ���� -> �ι�° �ּҰ� ���� -> k��° �ּҰ� ����
	}
	answer = min; ;//k����ŭ �ݺ� �� ����� min�� answer�� ���� 
	return answer;
}

int main() {
	int arr[][4] = { {5, 12, 4, 31}, {24, 13, 11, 2}, {43, 44, 19, 26}, {33, 65, 20, 21} };
	int len = 4;
	int k = 3;
	printf("%d", solution(arr, len, k));
}