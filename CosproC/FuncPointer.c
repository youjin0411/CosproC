#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int func_a(char p[][20], int n);
int func_a(char (*p)[20], int n) {
	//���޹��� 2�� �迭�� �� ���� ���ڿ����� n�� ����Ѵ�.
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]);
	}
	//2�� �迭�� ��� ���ڵ��� ó���Ϸ��� ���
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 20; k++) {
			p[i][k]; //char�� �����̴�
		}
	}
	return 0;
}
int main() {
	char titles[5][20] = { "first", "second", "third", "fourth", "first" };
	//2�� �迭�� ����
	func_a(titles, 5);
}