#include<stdio.h>
#include<stdlib.h>
int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;  //��Ʈ����ũ
	result[1] = 0;  //�� 
	for (int i = 0; i < 3; i++) { //3�ڸ� �� 
		temp = b;
		for (int j = 0; j < 3; j++) {
			if (a % 10 == temp % 10) { //a�� b�� ��� ���� ���� ���� ��
				if (i == j) result[0]++; //i,j�� ��ġ�� ���ٸ� ��Ʈ����ũ
				else result[1]++; //i,j ��ġ�� �ٸ����� ���� ���ٸ� �� ��
			}
			temp /= 10; //temp /= 10; 
		}
		a /= 10;
	}
	return result;
} 
int main() {
	int a = 123;
	int b = 345;
	int* res = solution(a, b);
	for (int i = 0; i < 2; i++) {
		printf("%d", res[i]);
	}
}
