#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char name[20] = { 0, };
	printf("%d\n", sizeof(name)); //�̸��� name�� ������ ũ�� 
	printf("%d\n", sizeof(*(name))); //�ּҰ� name�� ������ ũ��
	printf("%d\n", sizeof(*(&name))); //�ּҰ� &name�� �������� ũ��

	char name2[3][20] = { 0, };
	printf("%d\n", sizeof(name2)); //�̸��� name�� ������ ũ��
	printf("%d\n", sizeof(*(name2))); //�ּҰ� name�� ������ ũ��
	printf("%d\n", sizeof(*(name2[0]))); //�ּҰ� name[0]�� ������ ũ��
}